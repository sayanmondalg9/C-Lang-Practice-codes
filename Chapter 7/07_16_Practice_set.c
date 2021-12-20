#include <stdio.h>
/*
Q7. Create an array of size 3x10 containing multiplication
table of the numbers 2,7 and 9 respectively with function.
*/
void printTable(int *mulTable, int num, int n)
{
   printf("\nThe multiplication table of %d is : \n", num);
   for (int i=0;i<n;i++)
   {
      mulTable[i]=num*(i+1);
      printf("%d x %d = %d \n", num, i+1, mulTable[i]);
   }
   printf("**************************************\n");
}
int main()
{
   int mulTable[3][10];//-->mulTable[3][10] means three 1d array size of 10 == 2d array.
   printTable(mulTable[0], 2, 10);
   printTable(mulTable[1], 7, 10);
   printTable(mulTable[2], 9, 10);

   return 0;
}