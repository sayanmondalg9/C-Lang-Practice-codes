#include <stdio.h>

/*
Quiz. Write a program to print first n natural
numbers using for loop. 
*/

int main()
{
    int a=0, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(a=0; a<n; a++) 
    {
        printf("The number is %d\n", a+1);
    }
    return 0;
}