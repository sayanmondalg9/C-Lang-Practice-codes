#include <stdio.h>
/*
Q6. Writ a program to implement program 5 using for
and do-while loop.
*/

int main()
{
    printf("\n****Using For Loop****\n");
    int a = 1, sum = 0, n;
    printf("Enter a number\n");
    scanf("%d", &n);
    for(a; a<=n; a++)
    {
        sum+=a;
    }
    printf("The sum of 1 to %d is %d\n", n, sum);

    printf("\n****Using Do-While Loop****\n");
    int A = 1, SUM = 0, N;
    printf("Enter a number\n");
    scanf("%d", &N);
    do
    {
        SUM += A;
        A++;
    } while (A<=N);
    printf("The sum of 1 to %d is %d\n", N, SUM);

    return 0;
}