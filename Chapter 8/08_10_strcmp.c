#include <stdio.h>
#include <string.h>

int main()
{
   char str1[50] = "abLorem";
   char *str2 = "abSayan";
   int val = strcmp(str1, str2);
   printf("Now the compared value is %d", val);
   return 0;
}
