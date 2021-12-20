#include <stdio.h>
/*
Quiz. Write a program to print n natural numbers
in reverse order using for loop.
*/

int main()
{
    int n, i;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = n; i > 0; i--)
    {
        printf("The value of i is %d\n", i);
    }
    return 0; 
}