#include <stdio.h>

int main()
{
   int mrk[5];
   for (int i=0; i<5; i++)
   {
      printf("Enter the marks of student %d : ", i+1);
      scanf("%d", &mrk[i]);
   }
   for (int i=0; i<5; i++)
   {
      printf("The marks of student %d is %d\n", i+1, mrk[i]);
   }
   return 0;
}