/*
Q1. Create a two dimensional vector using
structures in C.
*/
#include <stdio.h>

struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v1, v2;
    v1.x = 56;
    v1.y = 65;
    printf("X dim is %d \nY dim is %d \n", v1.x, v1.y);

    v2.x = 565;
    v2.y = 656;
    printf("X dim is %d \nY dim is %d \n", v2.x, v2.y);
    return 0;
}