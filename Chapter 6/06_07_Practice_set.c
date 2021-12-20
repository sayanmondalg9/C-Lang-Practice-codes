#include <stdio.h>
/*
Q3. Write a program to change the value of a variable
to ten times of its current value. Write a funtion and
pass the value by reference.
*/
int change_value(int *a)
{
  return *a = 5 * 10;
}
int main()
{
  int a = 5;
  printf("The value of varible i before change is %d\n", a);
  change_value(&a);
  printf("The value of varible i after change is %d\n", a);
  return 0;
}