#include <stdio.h>

/*
Q. Write a program to find greatest of four numbers entered 
by the user.
*/

int main()
{
    int a, b, c, d;
    printf("Enter your four numbers\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    /*
    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("The greatest number is %d", a);
            }
            else
            {
                printf("The greatest number is  %d", d);
            }
            
        }
        else
        {
            if (c>d)
            {
                printf("The greatest number is %d", c);
            }
            else
            {
                printf("The greatest number is  %d", d);
            }
              
        }
           
    }
    else
    {
        if (b>c)
        {
            if (b>d)
            {
                printf("The greatest number is  %d", b);
            }
            else
            {
                printf("The greatest number is  %d", d);
            }
                        
        }
        else
        {
            if (c>d)
            {
                printf("The greatest number is %d", c);
            }
            else
            {
                printf("The greatest number is  %d", d);
            }
        
        }
    
    } 
    */

    if (a > b && a > c && a > d)
    {
        printf("The greatest number is %d", a);
    }
    else if (b > c && b > d)
    {
        printf("The greatest number is %d", b);
    }
    else if (c > d)
    {
        printf("The greatest number is %d", c);
    }
    else
    {
        printf("The greatest number is %d", d);
    }

    return 0;
}
