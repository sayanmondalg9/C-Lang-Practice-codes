#include <stdio.h>
// void printArray(int *ptr, int n)
// {
//    for(int i=0; i<n; i++)
//    {
//       printf("The value of element %d is %d\n", i+1, *(ptr+1));
//    }
// }
void printArray(int ptr[], int n)
{
   for(int i=0; i<n; i++)
   {
      printf("The value of element %d is %d\n", i+1, ptr[i]);
   }
   // ptr[2]= 222;//This value will be changes in arr array of main as well
}
int main()
{
   int arr[]={0,1,2,3,4,5,6};
   printArray(arr, 7);
   printf("%d", arr[2]);
   return 0;
}