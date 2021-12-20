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
    struct employe no1;
    struct employe *ptr;

    ptr=&no1;
    //(*ptr).employe_id=100;//or you can also write : ptr->employe_id;
    ptr->employe_id=100;
    printf("%d", no1.employe_id);
    return 0;
}