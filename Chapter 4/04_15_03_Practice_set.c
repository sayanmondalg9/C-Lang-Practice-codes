#include <stdio.h>
/*
Q5. Write a programe to sum first n natural numbers
using while loop.
*/

int main()
{
    int a = 1, sum = 0, n;
    printf("Enter a number\n");
    scanf("%d", &n);
    while (a<=n)
    {
        sum = sum + a;// (sum += a)
        a++;
    }
        printf("The sum of %d natural number is %d", n, sum);

    // int n, sum = 0;
    // printf("Enter a limit\n");
    // scanf("%d", &n);
    // while(n!=0)
    // {
    //     sum = sum + n--;
    // }
    // printf("%d", sum);
    return 0;
}