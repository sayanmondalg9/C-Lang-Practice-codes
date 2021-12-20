#include <stdio.h>
#include <string.h>
/*
Quiz. Write a program to store the details of 3 employes 
from user defined data. use the structure declared value
and print also.
*/
struct employe
{
    int employe_id;
    float salary;
    char name[20];
};
int main()
{
    struct employe no1, no2, no3;
    printf("Enter the employe id of no1 : ");
    scanf("%d", &no1.employe_id);
    printf("Enter the salary of no1 : ");
    scanf("%f", &no1.salary);
    printf("Enter the name of no1 : ");
    // fflush(stdin); //-->if i use space between string
    // gets(no1.name);//-->then i have to use these two lines(line-17,18).
    scanf("%s", no1.name);

    printf("Enter the employe id of no2 : ");
    scanf("%d", &no2.employe_id);
    printf("Enter the salary of no2 : ");
    scanf("%f", &no2.salary);
    printf("Enter the name of no2 : ");
    // fflush(stdin); //-->if i use space between string
    // gets(no2.name);//-->then i have to use these two lines(line-17,18).
    scanf("%s", no2.name);

    printf("Enter the employe id of no3 : ");
    scanf("%d", &no3.employe_id);
    printf("Enter the salary of no3 : ");
    scanf("%f", &no3.salary);
    printf("Enter the name of no3 : ");
    // fflush(stdin); //-->if i use space between string
    // gets(no3.name);//-->then i have to use these two lines(line-17,18).
    scanf("%s", no3.name);

    printf("no1.employe_id = %d\n", no1.employe_id);
    printf("no1.salary = %.2f\n", no1.salary);
    printf("no1.name = %s\n\n", no1.name);

    printf("no2.employe_id = %d\n", no2.employe_id);
    printf("no2.salary = %.2f\n", no2.salary);
    printf("no2.name = %s\n\n", no2.name);

    printf("no3.employe_id = %d\n", no3.employe_id);
    printf("no3.salary = %.2f\n", no3.salary);
    printf("no3.name = %s\n\n", no3.name);
    return 0;
}