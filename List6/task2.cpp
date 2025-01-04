#include <iostream>
#include <vector>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <atomic>
#include <thread>
#include <functional>


class thread_pool
{
  public:
    thread_pool(size_t threadNumber)
      :stopFlag(false), sum(0.0), taskCount(0)
    {
      for(int i = 0; i < threadNumber; i++)
        slaves.push_back(std::thread(&thread_pool::slaving, this));
    }

    ~thread_pool()
    {
      stop();
    }

    void addTask(std::function<double()> task)
    {
      {
        std::lock_guard<std::mutex> lock(mtx);
        tasks.push(task);
      }
      cv.notify_one();
    }

    double average()
    {
      if(sum == 0.0) 
        return 0.0;
      else
        return sum / static_cast<double>(taskCount);
    }

    void stop()
    {
      {
        std::lock_guard<std::mutex> lock(mtx);
        stopFlag = true;
      }
      cv.notify_all();
      for(auto& el: slaves)
      {
        if(el.joinable())
          el.join();
      }
      
    }

  private:
    void slaving()
    {
      while(true)
      {
        std::function<double()> task;
        {
          std::unique_lock<std::mutex> lock(mtx);
          cv.wait(lock, [this]{return stopFlag || !tasks.empty();});

          if(stopFlag && tasks.empty())
            return;
          
          task = tasks.front();
          tasks.pop();
        }
      double result = task();
      {
        std::lock_guard<std::mutex> lock(mtx);
        sum += result;
        ++taskCount;
      }
      }

    }

    std::vector<std::thread> slaves;
    std::queue<std::function<double()>> tasks;
    std::mutex mtx;
    std::condition_variable cv;
    double sum;
    std::atomic<size_t> taskCount;
    bool stopFlag;
};




int main()
{
  std::cout << "Task 2\n";
  thread_pool pool(4);
  pool.addTask([]{ return 2.0;});
  pool.addTask([]{ return 3.0;});
  pool.addTask([]{ return 4.0;});
  pool.addTask([]{ return 5.0;});
  
  std::this_thread::sleep_for(std::chrono::seconds(1));

  pool.stop();

  std::cout << "Srednia: " << pool.average() << "\n";
}
