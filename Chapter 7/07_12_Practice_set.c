#include <stdio.h>
/*
Q2. If s[3] is a 1d array fo integers than *(s+3) refers
to the third element:
(i)   True
(ii)  False <-- right.
(iii) Depends
*/
int main()
{
   int s[3] = {1, 2, 3};
   int *p = &s[0];
   printf("s is %d\n", *p);
   printf("s is %d\n", *(p + 2));
   return 0;
}