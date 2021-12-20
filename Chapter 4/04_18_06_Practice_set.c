#include <stdio.h>
/*
Q8. Write a program to calculate the factorial of a 
given number n using a for loop.
(Factorial of 5 mean - 5 * 4 * 3 * 2 * 1)
*/

int main()
{
    int a, factorial = 1;
    printf("Enter a number to see the factorial\n");
    scanf("%d", &a);
    for(a; a>=1; a--)
    {
        factorial *= a; //factoral = factorial * a;
    }
    printf("The factorial of %d is %d\n", a, factorial);

    return 0;
}