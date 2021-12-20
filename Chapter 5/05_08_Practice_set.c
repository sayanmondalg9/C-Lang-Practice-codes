#include <stdio.h>
/*
Q1. Write a program using functions to find average 
of three numbers.
*/

float average (int a , int b, int c);

int main()
{
    int a, b, c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("The avarage of %d %d %d is %f\n", a, b, c, average(a, b, c));
    return 0;
}

float average (int a , int b, int c)
{
    float result;
    result = (float)(a + b + c)/3; //--> Here we use type casting.
    return result;
}