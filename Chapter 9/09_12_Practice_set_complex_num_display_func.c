/*
Q6. Create an array of 5 complex numbers created in problem
5 and display then with the help of a diplay function. the 
values must be taken as an input from the user.
*/
#include <stdio.h>

typedef struct complex
{
    float a;
    int b;
}comp;

void display( comp com)
{
    printf("The real number is %.2f\nThe imaginary part is i(%d)\n", com.a, com.b);
    printf("The complex number is %.2f + i(%d)\n", com.a, com.b);
}

int main()
{
    comp comnum[5];

    for (int i = 0; i< 5; i++)
    {
        printf("Enter the real number for %d num", i+1);
        scanf("%f", &comnum[i].a);

        printf("Enter the imaginary number for %d num", i+1);
        scanf("%d", &comnum[i].b);
    }

for (int i = 0; i<5; i++)
{
    display(comnum[i]);
}

    return 0;
}