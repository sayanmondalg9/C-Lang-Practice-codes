#include <stdio.h>

void goodMorning();
void goodAfternoon();
void goodNight();

int main() // Main directly call goodMorning and also indirectly call goodAfternoon and goodNight. 
{
    goodMorning();
    return 0;
}

    void goodMorning()
    {
        printf("1. I wise you a very Good Morning\n");
        goodAfternoon(); //--> goodMorning call's goodAfternon
    }
    void goodAfternoon()
    {
        printf("2. I wise you a Good Afternoon\n");
        goodNight(); //--> goodAfternoon call's goodNight
    }
    void goodNight()
    {
        printf("3. I wise you a Good Night\n");
    }