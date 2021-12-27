/*
Q8. Create a structure representing a bank account of a custmer
. What fields did you  use and why?
*/
#include <stdio.h>
#include <string.h>

typedef struct account_fields
{
    int account_number;
    int account_opening_year;
    float account_balance;
    char owner_name[30];

} bank_info;

int main()
{
    bank_info custmer[5];
    for (int i = 0; i < 5; i++)
    {

        printf("Enter your account number\n");
        scanf("%d", &custmer[i].account_number);

        printf("Enter your account opening year\n");
        scanf("%d", &custmer[i].account_opening_year);

        printf("Enter your account balance\n");
        scanf("%f", &custmer[i].account_balance);
        
        fflush stdin;
        printf("Enter your name\n");
        gets(custmer[i].owner_name);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Your account number is %d\n", custmer[i].account_number);

        printf("Your account opening year is %d\n", custmer[i].account_opening_year);

        printf("Your account balance is %f\n", custmer[i].account_balance);

        printf("Your name is %s\n", custmer[i].owner_name);
    }

    return 0;
}