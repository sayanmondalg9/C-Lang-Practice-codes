#include <stdio.h>
/*
Q1. Create an array of 10 numbers. Varify using pointer
arithmatic that (ptr+2) points to the third element where
ptr is a pointer pointing to the first element of the array.
*/
int main()
{
   int arr[10];
   // int *ptr = &arr[0];
   int *ptr = arr; // line no.10 and this will point the first element.
   ptr = ptr + 2;
   if (ptr == &arr[2])
   {
      printf("The pointer points the third element of array.\n");
   }
   else
   {
      printf("The pointer doesnot point the third element of array.");
   }
   return 0;
}