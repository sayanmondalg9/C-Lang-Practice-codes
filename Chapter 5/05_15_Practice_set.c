#include <stdio.h>
/*
Write a program using itrative approch to print star pattern
in odd number. -->(2*n-1) is the formula of finding odd numbers.
example-- *
          ***
          *****
*/
int main()
{
    // int n;
    // printf("Enter a number\n");
    // scanf("%d", &n);
    // for(int i = 0; i<n; i++)
    // {
    //     for (int j = 0; j<i+1; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }



    int no_rows, row, column;
    printf("Enter the number of row :- ");
    scanf("%d", &no_rows);
    for ( row = 1; row <= no_rows; row++)
    {
        for ( column = 1; column <= row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}