#include <stdio.h>

int main()
{
    FILE *ptr;
    int number = 56;
    ptr = fopen("generated.txt","w");
    fprintf(ptr,"the number  is %d\n", number);
    fprintf(ptr,"thanks for using fprintf", number);
    fclose(ptr);
    return 0;
}