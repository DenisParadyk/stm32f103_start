#include "main.h"

int main()
{
  ClockInit();
  LedInit();

  int i;

  while(TRUE)
  {
    for(i=0; i<0x40000; i++);
    LedSetHi();

    for(i=0; i<0x40000; i++);
    LedSetLow();
  }
  return 0;
}
