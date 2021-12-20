#include <stdio.h>

int main()
{
   char *str = "sayan"; //-->We need to use * must. Otherwise it compile as a integr not a charecter.
   // char str[]="sayan";//-->i use this also. it is same as line no.5
   printf("%s", str);
   return 0;
}