#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    int n;
    printf("How many integers do you want to enter : ");
    scanf("%d", &n);
    ptr = (float *)malloc(n * sizeof(float));
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element : ", i);
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is : %f\n", i, ptr[i]);
    }
    return 0;
}