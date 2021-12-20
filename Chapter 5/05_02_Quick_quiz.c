#include <stdio.h>

/*
Quiz. Write a program with three functions 
1> Good morning function which print "Good Morning"
2> Good afternoon function which print "Good Afternoon"
3> Good night function which print "Good Night"
main() should call all of these in order 1 > 2 > 3
*/

void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{
    goodMorning();
    goodAfternoon();
    goodNight();
    return 0;
}

    void goodMorning()
    {
        printf("1. I wise you a very Good Morning\n");
    }
    void goodAfternoon()
    {
        printf("2. I wise you a Good Afternoon\n");
    }
    void goodNight()
    {
        printf("3. I wise you a Good Night\n");
    }