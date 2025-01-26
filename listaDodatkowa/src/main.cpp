#include <iostream>
#include "../include/calls1.h"
#include "../include/singleton.h"
#include "../include/singleton_dynamic.h"

int main()
{
  Singleton::instance().calls();
  calls1();
  instance().calls();
  calls2();
  return 0;
}
