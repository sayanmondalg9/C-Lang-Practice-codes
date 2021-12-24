/*
Q4. Write a program to illustrate the use of
arrow operator '->' in c.
*/
#include <stdio.h>

struct employe
{
    int id;
    float salary;
    char name[20];
};

int main()
{
    struct employe no1;
    struct employe *ptr;

    ptr = &no1;
    (*ptr).id = 101;
    printf("%d\n", no1.id);

    ptr->id = 100;
    printf("%d", no1.id);
    return 0;
}