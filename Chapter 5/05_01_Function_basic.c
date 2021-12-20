#include <stdio.h>

void display(); //--> Function prototype

int main()
{
    int a;
    printf("1. Initializing display function\n");
    display(); //--> Function call
    printf("3. Display function finished its work\n");
    return 0;
}

void display() //--> Function definition
{
    printf("2. This is display\n");
}