#include <stdio.h>
/*
Q6. Write a program to change the value of a variable
to ten times of its current value. Write a funtion and
pass the value by call by value and verify that it does'nt
change the value of the said variable.
*/
void sumAndAvg(int a, int b, int sum, float avg)
{
  sum  = a +b;
  avg = sum / 2;
}
int main()
{
  int i, j, sum;
  float avg;
  sumAndAvg(i, j, sum, avg);
  printf("The value of sum is %d\n", sum);
  printf("The value of avg is %f\n", avg);
  return 0;
}