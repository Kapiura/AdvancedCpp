#include "../include/singleton.h"
#include <iostream>

Singleton::Singleton()
{
  std::cout << "Tworzenie instancji, adres: " << this << " +\n";
}

Singleton::~Singleton()
{
  std::cout << "Usuwanie instancji, adres: " << this << " -\n";
}

int Singleton::callsCounter = 0;

void Singleton::calls()
{
  std::cout << "Adres: " << this << "\t Wywołań calls: " << ++callsCounter << "\n";
}

Singleton& Singleton::instance()
{
  static Singleton instance;
  return instance;
}
