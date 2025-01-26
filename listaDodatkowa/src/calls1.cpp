#include "../include/calls1.h"
#include "../include/singleton.h"

void calls1()
{
  Singleton& caller = Singleton::instance();
  caller.calls();
}
