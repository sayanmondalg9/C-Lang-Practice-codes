/*
Q5. WAP to modify a file containing an integer to double its value.
*/
#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;

    ptr = fopen("integer double.txt", "r");
    fscanf(ptr, "%d", &num);

    ptr = fopen("integer double.txt", "w");
    fprintf(ptr,"%d", num*2);

    fclose(ptr);
    printf("Successfully generated!");
    return 0;
}