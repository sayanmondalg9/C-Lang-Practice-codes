#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissors(char you, char comp)
{
    // draw = 0  win = 1  lose = -1
    if (you == comp) // rr  pp  ss
    {
        return 0;
    }
    if (you == 'r' && comp == 'p') // rp
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r') // pr
    {
        return 1;
    }
    if (you == 'p' && comp == 's') // ps
    {
        return -1;
    }
    else if (you == 's' && comp == 'p') // sp
    {
        return 1;
    }
    if (you == 's' && comp == 'r') // sr
    {
        return -1;
    }
    else if (you == 'r' && comp == 's') // rs
    {
        return 1;
    }
}

int main()
{
    char you, comp;
    int result;
    int num;
    srand(time(0));
    num = rand() % 100 + 1;
    if (num<=33)
    {
        comp = 'r';
    }
    else if (num<=66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }
    printf("Enter 'r' for rock 'p' for paper 's' for scissors\n");
    scanf("%c", &you);
    result = rockpaperscissors(you, comp);
    printf("You chose '%c' and computer chose '%c' and ", you, comp);
    if (result == 0)
    {
        printf("This match is 'DRAW'");
    }
    else if (result == 1)
    {
        printf("'YOU WIN'");
    }
    else
    {
        printf("'YOU LOSE'");
    }
    return 0;
}