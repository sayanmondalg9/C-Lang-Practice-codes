#include <stdio.h>
/*
Q2. Write a program to print a multiplication table in reversed order, 
of a given number entered by the user.
*/

int main()
{
    int a;
    printf("Enter a number to print a multiplcation table in reverse order\n");
    scanf("%d", &a);
    printf("The multiplication table of %d is - \n", a);
    for(int b = 10; b>0; b--)
    {
        printf("%d x %d = %d\n",a, b, a*b);
    }

    return 0;
}