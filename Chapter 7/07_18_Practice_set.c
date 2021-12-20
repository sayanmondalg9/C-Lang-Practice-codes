#include <stdio.h>
/*
Q9. Creat a 3d array and print the addressof its elements
in increasing order.
*/
int main()
{
   int arr[2][3][4];
   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         for (int k = 0; k < 4; k++)
         {
            printf("Address of arr[%d][%d][%d] is %u \n", i, j, k, &arr[i][j][k]);
         }
      }
   }
   return 0;
}