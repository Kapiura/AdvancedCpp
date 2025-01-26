#include "../include/singleton_dynamic.h"

void calls2()
{
  Singleton& caller = Singleton::instance();
  caller.calls();
}

Singleton& instance()
{
  Singleton& ref = Singleton::instance();
  return ref;
}
