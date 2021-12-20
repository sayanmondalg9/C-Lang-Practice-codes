#include <stdio.h>

int main()
{
   int i = 5;
   int *ptr = &i;
   printf("The value of ptr is %u\n", ptr);
   ptr++;
   printf("The value of ptr is %u\n\n", ptr);

   char c = '5';
   char *ch = &c;
   printf("The value of ch is %u\n", ch);
   ch++;
   printf("The value of ch is %u\n\n", ch);

   float j = '5';
   float *flt = &j;
   printf("The value of flt is %u\n", flt);
   flt++;
   printf("The value of flt is %u\n\n", flt);
   
   return 0;
}