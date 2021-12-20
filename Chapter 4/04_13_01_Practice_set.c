#include <stdio.h>
/*
Q1. Write a programe to print multiplication table of
a given number entered by the user.
*/

int main()
{
    int a, b = 0;
    printf("Enter a number to print a multiplication table\n");
    scanf("%d",  &a);
    printf("The multiplication table of %d is - \n", a);
    while(b<10) // Any types loop i can use.
    {
        printf("%d x %d = %d\n", a, (b+1), a * (b+1));
        b++;
    }
    return 0;
}