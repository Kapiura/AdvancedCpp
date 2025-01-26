#include <iostream>
#include "../include/calls1.h"
#include "../include/singleton.h"
#include "../include/singleton_dynamic.h"

int main()
{
  Singleton& ref = Singleton::instance();
  ref.calls();
  calls1();

  Singleton& dynamic = instance();
  dynamic.calls();
  calls2();
  return 0;
}
