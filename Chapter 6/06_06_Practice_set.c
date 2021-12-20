#include <stdio.h>
/*
Q2. Write a program having a variable i. Print the adress 
of i. Pass this variable to a function and print its
address. Are these addresses same? why?
*/

void printadd(int a)
{
  printf("The address of variable i is %u\n", &a);
}
int main()
{
  int i = 5;
  printf("The address of variable i is %d\n", i);
  printf("The address of variable i is %d\n", &i);
  printadd(i);
  return 0;
}