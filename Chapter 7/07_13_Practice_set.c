#include <stdio.h>
/*
Q3. Write a program to create an array of 10 integers and
store multiplication table of 5 in it.
*/
int main()
{
   int arr[10], num;
   printf("Enter a number\n");
   scanf("%d", &num);
   for (int i = 0; i < 10; i++)
   {
      arr[i] = num * (i + 1);
   }
   for (int i = 0; i < 10; i++)
   {
      printf("%d x %d = %d\n", num, i + 1, arr[i]);
   }
   return 0;
}