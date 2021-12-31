/*
Quiz. WAP to creat a dynamic array of 5 float using malloc()
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(6 * sizeof(float));
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element : ", i);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is : %f\n", i, ptr[i]);
    }
    return 0;
}