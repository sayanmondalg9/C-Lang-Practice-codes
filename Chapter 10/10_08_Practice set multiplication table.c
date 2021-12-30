/*
Q2. W A P to generate multiplication table of a given number
in text format. Make sure that the file is readable and well 
formatted.
*/
#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    printf("Enter a number to print a multiplication table\n");
    scanf("%d", &num);
    ptr = fopen("Multiplication Table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d x %d = %d\n", num, i + 1, num * (i + 1));
    }
    fclose(ptr);
    printf("Your multiplication table is successfully generated.\nYou can check that on Multiplication Table.txt file.");
    return 0;
}