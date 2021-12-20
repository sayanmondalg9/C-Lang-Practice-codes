#include <stdio.h>
/*
Q11. Implement 10th no. question using other 
types of loops.
*/

int main()
{
    int n, i = 2, prime = 1;
    printf("Enter your number\n");
    scanf("%d", &n);
    while (i*i<=n)
    {
        if (n%i==0)
        {
            prime = 0;
            break;
        }
        i++;
    }
    if (prime==0)
    {
        printf("This is a composite number\n");
    }
    else
    {
        printf("This is a prime numer\n");
    }  

    return 0;
}