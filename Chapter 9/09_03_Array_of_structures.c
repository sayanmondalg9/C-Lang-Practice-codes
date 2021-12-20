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
    struct employe lorem[100];
    lorem[0].employe_id=100.56;
    lorem[0].salary=100.56;
    strcpy(lorem[0].name,"sayan");

    lorem[1].employe_id=101;
    lorem[1].salary=95.56;
    strcpy(lorem[1].name,"lorem");

    lorem[2].employe_id=102;
    lorem[2].salary=90.56;
    strcpy(lorem[2].name,"larosa");

    printf("%d \n", lorem[0].employe_id);
    printf("%.2f \n", lorem[0].salary);
    printf("%s \n\n", lorem[0].name);

    printf("%d \n", lorem[1].employe_id);
    printf("%.2f \n", lorem[1].salary);
    printf("%s \n\n", lorem[1].name);

    printf("%d \n", lorem[2].employe_id);
    printf("%.2f \n", lorem[2].salary);
    printf("%s \n\n", lorem[2].name);
    return 0;
}