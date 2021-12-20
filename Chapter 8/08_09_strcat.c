#include <stdio.h>
#include<string.h>

int main()
{
   char str1[50]="Lorem";
   // char *str2="Sayan";
   char str2[50]="Sayan";//-->this is same as line no.7
   strcat(str1,str2);
   printf("Now the str1 is %s", str1);
   return 0;
}