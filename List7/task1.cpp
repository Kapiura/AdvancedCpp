//Napisz funkcję liczącą iloczyn skalarny dwóch wektorów przekazanych jako std::vector<double>
//Jako trzeci argument funkcja ma przyjmować obiekt typu std::promise, który zostanie użyty
//do zwrócenia wyniku lub wyjątku w przypadku przekazania wektorów pustych lub różniących
//się rozmiarem
//Funkcja main() powinna uruchomić 10 wątków (obiekty typu std::thread), 
//które policzą iloczyny skalarne przy użyciu powyższej funkcji. 
//Następnie poczekać na wyniki obliczeń
//(używając mechanizmu future) i wypisać na ekran ich sumę

#include <iostream>
#include <thread>
#include <future>
#include <vector>

void iloczynSkalarny(std::vector<double> vec1, std::vector<double> vec2, std::promise<double> p)
{
  try
  {
    if(vec1.empty() || vec2.empty() || vec1.size() != vec2.size())
      throw std::invalid_argument("Ktorys wektor jest pusty lub maja rozne rozmiary\n");

  double result = 0.0;
  for(size_t i = 0; i < vec1.size(); i++)
    result += vec1[i]*vec2[i];
  p.set_value(result);
  }
  catch(...)
  {
    p.set_exception(std::current_exception());
  }
}


int main()
{
  std::cout << "Task1\n";

  std::vector<std::pair<std::vector<double>, std::vector<double>>> vecPairs = {
    {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}}, 
    {{-1.0, -2.0, -3.0}, {4.0, 5.0, 6.0}}, 
    {{0.5, 1.5, 2.5}, {3.0, 2.0, 1.0}},
    {{1.0, 2.0, 3.0, 4.0}, {4.0, 3.0, 2.0, 1.0}},
    {{-1.0, -2.0}, {2.0, 1.0}},
    {{10.0, 20.0, 30.0}, {0.1, 0.2, 0.3}},
    {{1.0}, {5.0}},
    {{0.0, 0.0, 0.0}, {1.0, 2.0, 3.0}},
    {{-5.0, -10.0, -15.0}, {-1.0, -2.0, -3.0}},
    {{100.0, 200.0, 300.0}, {0.01, 0.02, 0.03}}
  };
  int wSize = 10;
  
  std::vector<std::promise<double>> promises(vecPairs.size());
  std::vector<std::future<double>> futures;
  
  for (auto& p : promises)
    futures.push_back(p.get_future());
    
  std::vector<std::jthread> slave;
  for (size_t i = 0; i < vecPairs.size(); i++)
        slave.emplace_back(iloczynSkalarny, vecPairs[i].first, vecPairs[i].second, std::move(promises[i]));

  double sum = 0.0;
  for (auto& f : futures)
  {
    try 
      {
        sum += f.get();
      } 
    catch (const std::exception& e) 
      {
        std::cerr << "Wątek zgłosił wyjątek: " << e.what() << "\n";
      }
    }
  
  std::cout << "Suma iloczynów skalarnych: " << sum << "\n";
  return 0;
}
