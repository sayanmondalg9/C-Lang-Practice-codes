/*
Q1. Write a program to read three integers from 
a file.
*/
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sayan.txt","r");
    int num1,num2,num3;
    fscanf(ptr,"%d %d %d", &num1, &num2, &num3);
    printf("First integer : %d\n",num1);
    printf("Second integer : %d\n",num2);
    printf("Third integer : %d\n",num3);
    fclose(ptr);
    return 0;
}