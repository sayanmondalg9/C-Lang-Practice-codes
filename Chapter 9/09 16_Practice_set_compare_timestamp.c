/*
Q11. Solve problem 9 for timestam using typedef keyword
exm-->  yy-MM-dd HH:mm:ss	  10-04-19 12:00:17
*/
#include <stdio.h>

typedef struct timestamp
{
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int second;

} tstmp;

void display(tstmp tm)
{
    printf("The timestmp is : %d-%d-%d %d:%d:%d\n", tm.year, tm.month, tm.day,tm.hour, tm.minute, tm.second);
}

int compare(tstmp t1, tstmp t2)
{
    if (t1.year > t2.year)
    {
        return 1;
    }
    if (t1.year < t2.year)
    {
        return -1;
    }
    if (t1.month > t2.month)
    {
        return 1;
    }
    if (t1.month < t2.month)
    {
        return -1;
    }
    if (t1.day > t2.day)
    {
        return 1;
    }
    if (t1.day < t2.day)
    {
        return -1;
    }
    if (t1.hour > t2.hour)
    {
        return 1;
    }
    if (t1.hour < t2.hour)
    {
        return -1;
    }
    if (t1.minute > t2.minute)
    {
        return 1;
    }
    if (t1.minute < t2.minute)
    {
        return -1;
    }
    if (t1.second > t2.second)
    {
        return 1;
    }
    if (t1.second < t2.second)
    {
        return -1;
    }
    return 0;
}
int main()
{
    tstmp t1 = {11,04,19,12,00,17};
    tstmp t2 = {12,04,19,12,00,17};

    display(t1);
    display(t2);

    int a = compare(t1, t2);
    printf("%d", a);
    return 0;
}