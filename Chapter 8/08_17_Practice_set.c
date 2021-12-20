#include <stdio.h>
/*
Q8. Write a program to coun the occurence of a given
character in a string.
*/
int occurence(char *st, char c)
{
   char *ptr = st;
   int count = 0;
   while (*ptr != '\0')
   {
      if (*ptr == c)
      {
         count++;
      }
         ptr++;
   }
   return count;
}
int main()
{
   char st[] = "Sayan";
   int count = occurence(st, 'a');
   printf("Occurences = %d", count);
   return 0;
}