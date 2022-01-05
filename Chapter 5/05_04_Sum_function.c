#include <stdio.h>
/*
Sum is a function which takes a and b as input and 
returns an integer as an output.
*/
int sum(int a, int b); //--> Function prototype + declaration.

int main()
{
    int c;
    c = sum(5, 6); //--> Function call + intialize the value in 'c'. these 5 and 6 is formal parameter
    printf("The value of c is %d\n", c);
    return 0;
}

int sum(int a, int b) //--> Function description these int a and int b is acctual parameter
{
    int c;
    c = a + b;
    return c; //--> return the value of result.
}