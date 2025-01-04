#include <iostream>
#include <future>
#include <vector>

//Napisz funkcję liczącą iloczyn skalarny dwóch wektorów przekazanych jako std::vector<double>
//Jako trzeci argument funkcja ma przyjmować obiekt typu std::promise, który zostanie użyty
//do zwrócenia wyniku lub wyjątku w przypadku przekazania wektorów pustych lub różniących
//się rozmiarem
//Funkcja main() powinna uruchomić 10 wątków (obiekty typu std::thread), 
//które policzą iloczyny skalarne przy użyciu powyższej funkcji. 
//Następnie poczekać na wyniki obliczeń
//(używając mechanizmu future) i wypisać na ekran ich sumę

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

  return 0;
}
