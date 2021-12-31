#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)calloc(6, sizeof(float));
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is : %f\n", i, ptr[i]);
    }
    return 0;
}