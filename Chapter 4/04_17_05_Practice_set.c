#include <stdio.h>
/*
Q7. write a program to calculate the sum of the 
numbers occuring in the multiplication table of 8.
(consider 8 * 1 to 8 * 10).
*/

int main()
{
    int a = 1, sum = 0, i = 10, n;
    printf("Enter a number\n");
    scanf("%d", &n);
    for(a; a<=i; a++)
    {
        sum += (n*a);
    printf("The sum is %d\n", sum);
    }

    return 0;
}