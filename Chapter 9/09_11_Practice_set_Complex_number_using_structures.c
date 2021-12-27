/*
Q5. Write a program with a structure representing a
complex number.
*/
#include <stdio.h>

struct complex
{
    float a;
    int b;
};

void display(struct complex com)
{
    printf("The real number is %.2f\nThe imaginary part is i(%d)\n", com.a, com.b);
    printf("The complex number is %.2f + i(%d)", com.a, com.b);
}

int main()
{
    struct complex comnum;
    comnum.a = 5;
    comnum.b = 6;
    display(comnum);

    return 0;
}