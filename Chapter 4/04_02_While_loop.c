#include <stdio.h>

int main()
{
    int a;
    printf("Enter your number");
    scanf("%d", &a);

    // a = 11;
    // while(a>10){ ---> These two lines will lead to an infinite loop
    while(a<10)
    {
        printf("%d\n", a);
        a++;
    }
    /*
    while(a<10)
    {
        a++;
        printf("%d\n", a);
    }
    */

    return 0;
}