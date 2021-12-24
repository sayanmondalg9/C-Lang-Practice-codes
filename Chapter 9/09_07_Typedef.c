#include <stdio.h>
#include <string.h>
typedef struct employe
{
    int id;
    float salary;
    char name[20];
} emp; // I creat a datatype 'emp' like 'int, float, char'.

void show(emp emp1)
{
    printf("The id of employe is : %d\n", emp1.id);
    printf("The salary of employe is : %f\n", emp1.salary);
    printf("The name of employe is : %s\n", emp1.name);
}

int main()
{
    // Declaring 'no1' and 'ptr'.
    emp no1;  // struct employe no1;// I can use 'emp' like 'int, float, char'.
    emp *ptr; // struct employe *ptr;//Dont have to write 'struct employe' rather than i use 'emp'.

    // Pointing 'ptr' to 'no1'.
    ptr = &no1;

    // Set the member values for 'no1'.
    ptr->id = 101;
    ptr->salary = 50.60;
    strcpy(ptr->name, "Sayan");

    show(no1);
    return 0;
}