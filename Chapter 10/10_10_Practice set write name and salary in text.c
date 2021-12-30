/*
Q4. Take name and salary of two employes as input from the user and
write them to a text file in the following format --
    name1, 10000
    name2, 10000
*/
#include <stdio.h>

int main()
{
    FILE *ptr;
    char name[2][30];
    int salary[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter your name\n");
        fflush stdin;
        gets(name[i]);
        printf("Enter your salary\n");
        scanf("%d", &salary[i]);
    }
    ptr = fopen("info.txt", "w");
    for (int i = 0; i < 2; i++)
    {
        fprintf(ptr, "%s, %d\n", name[i], salary[i]);
    }
    fclose(ptr);
    printf("Successfully generated!");
    return 0;
}