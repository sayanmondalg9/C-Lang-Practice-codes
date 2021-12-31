/*
Q1. WAP to dynamically create an array of size 6 capable of 
stroing 6 integers.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    return 0;
}