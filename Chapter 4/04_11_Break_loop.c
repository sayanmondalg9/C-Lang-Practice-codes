#include <stdio.h>

int main()
{
    int a = 0;
    do{
        printf("The value of a is %d\n", a);
        a++;
        if(a==6)
        {
            break;
        }
    }
    while (a<10);
    
    return 0;
}