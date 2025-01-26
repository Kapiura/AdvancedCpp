#include "../include/singleton_dynamic.h"

void calls2()
{
  Singleton::instance().calls();
}

Singleton& instance()
{
  Singleton& ref = Singleton::instance();
  return ref;
}
