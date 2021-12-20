#include <stdio.h>
/*
Q6. Write a program containing funtions which counts the
number of positive integers, nagative integers and zero
in an array.
*/
void count(int arr[])
{
   int pos = 0, neg = 0, zero = 0;
   for (int i = 0; i < 10; i++)
   {
      if (arr[i] > 0)
         pos++;
      else if (arr[i] < 0)
         neg++;
      else
         zero++;
   }
   printf("Positive = %d\n Negative = %d\n Zero = %d", pos, neg, zero);
}
int main()
{
   int arr[10];
   printf("Enter 10 numbers\n");
   for (int i = 0; i < 10; i++)
   {
      scanf("%d", &arr[i]);
   }
   count(arr);

   return 0;
}