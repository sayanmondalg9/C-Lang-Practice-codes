#include <stdio.h>
#include <math.h>

/*
Quiz. Use the library function to calculate the area 
of a square with side a.
*/

int main()
{
    int side;
    printf("Enter value of side\n");
    scanf("%d", &side);
    printf("The of area is %f", pow(side,2));

    return 0;
}