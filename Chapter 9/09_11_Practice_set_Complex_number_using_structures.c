/*
Q5. Write a program with a structure representing a 
complex number.
*/
#include <stdio.h>

struct complex
{
    float a;
    float b;
};
int main()
{
    struct complex com1, com2, sum;
    com1.a = 5;
    com1.b = 6;

    com2.a = 56;
    com2.b = 65;

    sum.a = com1.a+com2.a;
    sum.b = com1.b+com2.b;

    printf("(%.2f + %.2fi) + (%.2f + %.2fi) = %.2f + %.2fi", com1.a,com1.b,com2.a,com2.b,sum.a,sum.b);
    return 0;
}