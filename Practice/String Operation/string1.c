#include <stdio.h>
//#include <stdlib.h>

int main ()
{
  int i;
  char num[256];
  printf ("Enter a number: ");
  gets(num);
  i = atoi (num);
  printf ("The value entered is %d\n",i);
  return 0;
}
