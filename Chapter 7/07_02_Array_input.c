#include <stdio.h>

int main()
{
   int mrk[4];

   printf("Enter the marks of student 1 : ");
   scanf("%d", &mrk[0]);
   printf("Enter the marks of student 2 : ");
   scanf("%d", &mrk[1]);
   printf("Enter the marks of student 3 : ");
   scanf("%d", &mrk[2]);
   printf("Enter the marks of student 4 : ");
   scanf("%d", &mrk[3]);

   printf("You have entered %d %d %d and %d ", mrk[0],mrk[1],mrk[2],mrk[3]);
   return 0;
}