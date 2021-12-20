#include <stdio.h>
#include<string.h>

int main()
{
   char *str = "Sayan";
   int a = strlen(str);//-->it shows the length of string excluding the null charecter(\0).
   printf("The length of string st is %d", a);
   return 0;
}