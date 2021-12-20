#include <stdio.h>
/*
Write a recursive function to calculate the sum
of first n natural numbers.
*/
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1); //-->5 + sum(4); 4 + sum(3); 3 + sum(2); 2 + sum(1); --> 5+4+3+2+1 =15
    }
}
int main()
{
    int n, s = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    s = sum(n);
    printf("%d", s);
    return 0;
}