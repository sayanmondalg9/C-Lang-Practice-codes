#include <stdio.h>
/*
Write a program using recursion to calculate 'n' element 
of fibonacci series.
*/
int fib(int n);
int main()
{
    int a;
    printf("Enter a limit : ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        printf("The fibonacci series of %d is %d\n", a , fib(i));
    }
    return 0;
}

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return (fib(n-1) + fib (n-2));
    }
}