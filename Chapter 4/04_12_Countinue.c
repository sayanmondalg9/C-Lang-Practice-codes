#include <stdio.h>

int main()
{
    int a = 5, b= 0;
    while (b<10)
    {
        b++;
        if (b!=a)
        {
            continue;
        }
        printf("The value of b is %d\n", b);
    }
    

    return 0;
} 