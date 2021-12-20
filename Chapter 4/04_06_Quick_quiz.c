#include <stdio.h>

/*
Quiz. Write a programe to print first n natural
numbers using do-while loop.
*/

int main()
{
    int n, a;
    printf("Enter value of n\n");
    scanf("%d", &n);
    a = 0;
    do
    {
        printf("The number of n is %d\n", a + 1);
        a++;
    } while (a < n);

    return 0;
}