#include <stdio.h>
/*
Q8. Repeat problem no.7 for custom input given by the user.
*/
void printtable(int *multable, int num, int n)
{
   int m;
   printf("The multiplication table of %d is :- \n", num);
   for (int i = 0; i < n; i++)
   {
      multable[i] = num * (i + 1);
      printf("%d x %d = %d\n", num, i + 1, multable[i]);
   }
   printf("***************************************\n");
}
int main()
{
   int m = 0, n = 0, num;
   printf("How many array you want : ");
   scanf("%d", &m);
   printf("Enter the lenght of your array : ");
   int multable[m][n];
   scanf("%d", &n);
   for (int i = 0; i < m; i++)
   {
      printf("Enter a number to print multiplication table : ");
      scanf("%d", &num);
      printtable(multable[i], num, n);
   }
   return 0;
}