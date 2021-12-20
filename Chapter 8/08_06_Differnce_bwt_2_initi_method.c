#include <stdio.h>

int main()
{
//   char str[]= "sayan";//-->you cant change variables value using '[]'
  char *str= "sayan" ;//you have to use pointer '*'.
  str= "lorem";
   return 0;
}