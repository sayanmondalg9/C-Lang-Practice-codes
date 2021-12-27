/*
Q10. Solve problem 9 for time using typedef keyword
*/
#include <stdio.h>

typedef struct time
{
    int hour;
    int minute;
    int second;

}time;

void display(time tm)
{
    printf("The time is : %d:%d.%d\n", tm.hour,tm.minute,tm.second);
}

int compare (time t1, time t2)
{
    if(t1.hour>t2.hour)
    {
        return 1;
    }
    if(t1.hour<t2.hour)
    {
        return -1;
    }
    if(t1.minute>t2.minute)
    {
        return 1;
    }
    if(t1.minute<t2.minute)
    {
        return -1;
    }
    if(t1.second>t2.second)
    {
        return 1;
    }
    if(t1.second<t2.second)
    {
        return -1;
    }
    return 0;
}
int main()
{
    time t1 = {14, 11, 10};
    time t2 = {13, 11, 10};

    display(t1);
    display(t2);

    int a = compare(t1,t2);
    printf("%d", a);
    return 0;
}