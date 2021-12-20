#include <stdio.h>
#include <string.h>
struct employe //-->This a custom datatype like int, float, char
{
    int id;
    float salary;
    char name[20];
};
int main()
{
    int a = 56;
    char b = 'g';
    float d = 234.56;
    // employe no1;
    // no1.salary = 56.56;--> Wont work without employe structure

    struct employe no1;// -->Here no1 is a variable name for our custom datatype.
    no1.id = 56;
    no1.salary = 5656.56;
    // no1.name = "Sayan"; --> Wont work
    strcpy(no1.name, "Sayan");

    printf("%d\n", no1.id);
    printf("%.2f\n", no1.salary);
    printf("%s", no1.name);
    return 0;
}