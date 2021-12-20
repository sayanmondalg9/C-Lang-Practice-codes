#include <stdio.h>
/*
Q5.Write your own version of strcpy function from <string.h>
*/
int main()
{
   char *str1 = "This is a";
   char str2[20];
   int i;
   for (i = 0; str1[i]!='\0'; i++)
   {
      str2[i]=str1[i];
   }
   str2[i]= '\0';
   printf("%s copy of strcpy() ", str2);
   return 0;
}