#include <iostream>
#include <vector>
#include <time.h>
#include <thread>
#include <algorithm>

int main()
{
  srand(time(NULL));
  std::cout << "Task 1\n";
  std::cout << "Generowanie wektora z 1000 elemantami - zawierajacy losowe liczb calkowitych\n";
  std::vector<int> wec;
  for(int i = 0; i < 100; i++)
  {
    wec.push_back((rand() % 201) - 100);
  }
  std::cout << "Nasz wektor:\n[";
  for(const auto& el: wec)
    std::cout << el << ",";
  std::thread t1([&wec]{std::sort(wec.begin(), wec.begin()+(wec.size()/2));});
  std::thread t2([&wec]{std::sort(wec.begin()+(wec.size()/2), wec.end());});
  t1.join();
  t2.join();
  std::cout << "]\nNasz wektor posortowany polowicznie:\n[";
  for(const auto& el: wec)
    std::cout << el << ",";
  std::cout << "]\nJak widzimy nasze polwoki sa posrotwane ale osobno ze tak rzekne\n"; 
  std::vector<int> result(wec.size());
  std::merge(wec.begin(), wec.begin() + wec.size() / 2, wec.begin() + wec.size() / 2, wec.end(), result.begin());
  std::cout << "\n Nasz posortowany caly, zmergowany polowkami:\n[";
  for(const auto& el: result)
    std::cout << el << ",";
  std::cout << "]\n";
}
