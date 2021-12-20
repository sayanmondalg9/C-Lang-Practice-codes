#include <stdio.h>

int main()
{
   char st[30];
   printf("Enter your name : ");
   // scanf("%s", &st[0]); 
   scanf("%s", st);//-->this same as line no.7. 
   printf("Your name is %s", st);
   return 0;
}