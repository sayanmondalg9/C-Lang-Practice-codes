#include <stdio.h>

int main()
{
    int n, i = 2, prime = 1;
    printf("Enter your number :- ");
    scanf("%d", &n);
    do
    {
        if (n%i==0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i*i<=n);
    if (prime==0)
    {
        printf("This is a composite number\n");
    }
    else
    {
        printf("This is a prime number\n");
    }     

    return 0;
}


//This is wrong