#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int *ptr2;

    ptr = (int *)malloc(60000 * sizeof(int));
    
    for (int i = 0; i < 60000; i++)
    {
        ptr2 = (int *)malloc(60000 * sizeof(int));
        
        printf("The value of %d element : ", i);
        scanf("%d", &ptr[i]);

        free(ptr2);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is : %d\n", i, ptr[i]);
    }
    return 0;
}