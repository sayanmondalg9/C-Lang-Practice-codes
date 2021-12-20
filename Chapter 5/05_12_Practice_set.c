#include <stdio.h>
/*
What will the following line produce in a c program
 int a = n;
 printf("%d %d %d", a, ++a, a++);
*/
int main()
{
    int a = 5;
    printf("%d %d %d", a, ++a, a++); //compiler compile the arguments right to left.
    return 0;// it varies in different compiler.
}