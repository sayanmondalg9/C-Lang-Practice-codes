#include <stdio.h>
/*
Q5. write a program containing a funtion which reveres the 
array passed to it.
*/
void reverseArr(int *arr, int n)
{
   int temp;
   for (int i=0; i<(n/2); i++)
   {
      temp = arr[i];
      arr[i]=arr[n-i-1];
      arr[n-i-1]=temp;
   }
}
int main()
{
   int arr[]={1,2,3,4,5,6,7};
   reverseArr(arr, 7);
   for(int i=0; i<7; i++)
   {
      printf("The value of arr[%d] element is %d\n", i, arr[i]);
   }
   return 0;
}