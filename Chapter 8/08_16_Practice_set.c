#include <stdio.h>
void decrypt(char *c)
{
   char *str = c;
   while(*str!='\0')
   {
      *str = *str - 1;
      *str ++;
   }
}
int main()
{
   char c[] = "Tbzbo";
   decrypt(c);
   printf("Decrypted string is --> %s", c);
   return 0;
}