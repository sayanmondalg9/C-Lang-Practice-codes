#include <stdio.h>
/*
Q5. Write a program to print the value of a variable 
i by using "pointer to pointer" type of variable.
*/
int main()
{
  int i = 456;
  int *ptr;
  int **ptr_ptr;

  *ptr = &i;
  **ptr_ptr= &ptr;
  
  printf("The value of i using pointer to pointer is %d", **ptr_ptr);
  
  return 0;
}