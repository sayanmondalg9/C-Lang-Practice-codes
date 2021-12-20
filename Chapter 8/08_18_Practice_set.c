#include <stdio.h>
#include <string.h>
/*
Q9. W A P to check whether a given character is present in
a string or not.
*/
int main()
{
    char str[30], sub_str;
    int a, c;
    printf("Enter any word\n");
    gets(str);
    a = strlen(str);
    printf("Enter a character to find\n");
    scanf("%c", &sub_str);
    for (int i = 0; i <= a; i++)
    {
        if(str[i]==sub_str)
        {
            c = 1;
            break;
        }
    }
    if (c==1)
    {
        printf("Character matched");
    }
    else
    {
        printf("Character not matched");
    }
    return 0;
}