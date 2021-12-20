#include <stdio.h>
/*
Q4. Write a program using a function which calculate the
sum and avarage of two numbers. use pointers and print
the values of sum and avarage in main() function.
*/
void sumAndAvg(int a, int b, int *sum, float *avg)
{
  *sum = a + b;
  *avg = (float)(*sum) / 2;
}
int main()
{
  int i = 5, j = 6, sum;
  float avg;
  sumAndAvg(i, j, &sum, &avg);
  printf("The value of sum is %d\n", sum);
  printf("The value of avg is %f\n", avg);
  return 0;
}