/*
Q9. Write a structure capable of storing date. Write a funtion
to compare those dates.
*/
#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

void display(date a)
{
    printf("Date is : %d/%d/%d\n", a.day, a.month, a.year);
}

int compare(date a, date b)
{
    if (a.year > b.year)
    {
        return 1;
    }
    if (a.year < b.year)
    {
        return -1;
    }
    if (a.month > b.month)
    {
        return 1;
    }
    if (a.month < b.month)
    {
        return -1;
    }
    if (a.day > b.day)
    {
        return 1;
    }
    if (a.day < b.day)
    {
        return -1;
    }
    return 0;
}
int main()
{
    date a = {12, 11, 2003};
    date b = {13, 11, 2003};

    display(a);
    display(b);

    int c = compare(a, b);
    printf("ans : %d", c);
    return 0;
}