#include <stdio.h>
/*
Write a program using recursive approch to print star pattern
in odd number. -->(2*n-1) is the formula of finding odd numbers.
example-- *
          ***
          *****
*/
void printStar(int n);
int main()
{
    int n;
    printf("Enter a line limit\n");
    scanf("%d", &n);
    printStar(n);
    return 0;
}
void printStar(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    else
    {
        printStar(n - 1);
        for (int i = 0; i < (2 * n - 1); i++)
        {
            printf("*");
        }
        printf("\n");
    }
}