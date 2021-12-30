#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("sayan.txt", "r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);
    printf("The value is %d\n", num);
    printf("The value is %d\n", num2);
    return 0;
}