#include <stdio.h>
#include <string.h>
struct employe
{
    int id;
    float salary;
    char name[20];
};

void show(struct employe emp)
{
    printf("The id of employe is : %d\n", emp.id);
    printf("The salary of employe is : %f\n", emp.salary);
    printf("The name of employe is : %s\n", emp.name);
    emp.id = 56;// I have to use pointer to change the value in main()
}
int main()
{
    struct employe no1;
    struct employe *ptr;

    ptr=&no1;
    ptr->id=101;
    ptr->salary=50.60;
    strcpy(ptr->name,"Sayan");

    show(no1);
    printf("Id : %d\n", no1.id);

    return 0;
} 