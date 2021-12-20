#include <stdio.h>

int main()
{
    int a = 5;
    printf("The value after a++ is %d\n", a++);
    // --> a++; min, first print then incriment the value of a.
    printf("The value of a is %d\n", a);
    // --> The value of a is 6, because of a++.
    printf("The value after ++a is %d\n", ++a);
    // --> ++a; min, first ncriment then print the value of a.


    a = 5;
    printf("The value after --a is %d\n", a--);
    // --> a--; min, first print then decriment the value of a.
    printf("The value of a is %d\n", a);
    // --> The value of a is 4, because of a++.
    printf("The value after a-- is %d\n", --a);
    // --> --a; min, first decrement then print the value of a.

     
    a = 5;
    printf("The value of a is %d\n", a);
    a += 10; //--> Incriments a by 10.
    printf("The value after a += 10 is %d\n", a);

    return 0;
}
