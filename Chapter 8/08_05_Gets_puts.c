#include <stdio.h>

int main()
{
   char st[50];
   printf("Enter your name :");
   gets(st);//-->gets is the scanf for multy word string.
   // printf("your name is %s", st);
   puts(st);//puts is the printf for gets.
   return 0;
}