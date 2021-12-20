#include <stdio.h>
#include <string.h>
struct employe
{
    int employe_id;
    float salary;
    char name[20];
};
int main()
{
    struct employe lorem = {100, 100.56, "Sayan"};

    printf("%d \n", lorem.employe_id);
    printf("%.2f \n", lorem.salary);
    printf("%s \n", lorem.name);

    return 0;
}