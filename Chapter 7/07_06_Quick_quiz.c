#include <stdio.h>
/*
Quick Quiz -->
1. Addition of multiple numbers using pointers.
2. Subtration of two numbers using pointers.
3. Calculate difference between one pointer from another pointer.
4. Compartion of two pointer variables
   Try these operations on another variable by creating
   pointers in a separate program.
   Demmostate all the four operations.
*/
int main()
{
   // 1.Addition of pointers
   int num1;
   int *ptr;
   ptr = &num1;
   printf("%u\n", ptr);
   ptr++;
   printf("%u\n\n", ptr);

   // 2.Subtraction of pointer
   int num2;
   int *ptr2;
   ptr2 = &num2;
   printf("%u\n", ptr2);
   ptr2--;
   printf("%u\n\n", ptr2);

   // 3.Calculate difference between pointer address
   //  int num3;
   //  int *p1=&num3;

   //  printf("%d", (p1++)-p1);

   // Compare two pointers
   int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
   ////////// 0| 1 | 2 | 3 | 4 | 5 | 6 | 7
   int *p = &a[1], *q = &a[5];
   printf("%d\n", *(p + 3));//--> a[1] + 3 = a[4]
   printf("%d\n", *(q - 3));//--> a[5] - 3 = a[2]
   printf("%d\n", q - p);
   printf("%d\n", p < q);
   printf("%d\n", *p < *q);
   
   return 0;
}