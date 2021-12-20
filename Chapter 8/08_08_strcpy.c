#include <stdio.h>
#include <string.h>

int main()
{
   // char str[] = "This";
   char *str = "This";//this line and line no.6 are same .
   char str2[50];
   strcpy(str2, str);
   printf("Now the str2 is %s", str2);
   return 0;
}