#include <stdio.h>
/*
Quiz. Creat a 2d array by taking input from the user write a display
function to print the content of this 2d array an the screen.
*/
int main()
{
   int n_stu;
   int n_sub;
   int arr[3][3];
   printf("Enter the number of student\n");
   scanf("%d", &n_stu);
   printf("Enter the number of subject\n");
   scanf("%d", &n_sub);
   for(int i=0; i<n_stu; i++)
   {
      for(int j=0; j<n_sub; j++)
      {
         printf("Enter the marks of student %d in subject %d\n", i+1, j+1);
         scanf("%d", &arr[i][j]);
      }
   }
   for(int i=0; i<n_stu; i++)
   {
      for(int j=0; j<n_sub; j++)
      {
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }
   return 0;
}