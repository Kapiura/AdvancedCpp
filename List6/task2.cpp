// ma zawierac liste zadan - obiekty klasy std::function<doublke()> - 
// oraz zestaw watkow procesujacych ktore beda 
// te zadanai pobiertac z listy i wykonbywac 

#include <iostream>

class thread_pool
{
  public:
    thread_pool(size_t threadNumber)
      :stopFlag(false), sum(0.0), taskCount(0)
    {
      for(int i = 0; i < threadNumber; i++)
        slaves.push_back(std::thread(&thread_pool::salves, this));
    }

    void add_task(std::function<double()> task);

    double average()
    {
      if(total == 0.0) 
        return 0.0;
      else
        return sum.load() / static_cast<double>(taskCount);
    }

    void stop();

  private:
    std::vector<std::thread> slaves;
    std::queue<std::function<double()>> tasks;
    std::mutex mtx;
    std::condition_variable cv;
    std::atomic<double> sum;
    std::atomic<size_t> taskCount;
    bool stopFlag;
};




int main()
{
  std::cout << "Task 2\n";

}
