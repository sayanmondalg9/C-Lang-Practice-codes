#include <stdio.h>

int main()
{
   char str[] = "sayan";
   // char *ptr = &str[0];
   char *ptr = str;//-->i can write this , it is same as line no.6
   while (*ptr != '\0')
   {
      printf("%c", *ptr);
      ptr++;
   }
   while (*ptr != '\0')
   {
      printf("%u\n", ptr);
      ptr++;
   }
   return 0;
}