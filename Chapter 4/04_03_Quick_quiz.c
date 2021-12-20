#include <stdio.h>

/*
Quiz. Write a program to print natural
numbers from 10 to 20 when initial loop 
counter is intialized to 0.
*/

int main()
{
    int a = 0;
    while (a<=20)
    {
        if (a>=10)
        {
            printf("%d\n", a);
        }

        a++; // a = a + 1;
    }
    
    return 0;
}