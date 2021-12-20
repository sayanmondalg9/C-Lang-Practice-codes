#include <stdio.h>
int sum(int a, int b)
{
  int c = a + b;
  a = 767;
  b = 698;
  return c;
}
int main()
{
  int x = 4, y = 7;
  printf("The value of x and y is %d and %d\n", x, y);
  printf("The value of 4 + 7 is %d\n", sum(x, y));
  printf("The value of x and y after function call is %d and %d\n", x, y); //--> function does'nt change the value of main .
  
  return 0;
}