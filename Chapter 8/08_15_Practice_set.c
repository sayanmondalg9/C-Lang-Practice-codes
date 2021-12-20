#include <stdio.h>
/*
Q6. Write a program to encrypt a string by adding 1 to 
the ascii value of its characters.
*/
void encrypt(char *c)
{
   char *str = c;
   for(; *str!='\0'; str++)
   {
      *str= *str + 1;
   }
}
int main()
{
   char c[]="Sayan";
   encrypt(c);
   printf("encrypted string is --> %s", c);
   return 0;
}