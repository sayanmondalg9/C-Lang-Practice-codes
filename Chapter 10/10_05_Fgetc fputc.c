#include <stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("getcdemo.txt", "r");
    // char c = fgetc(ptr);
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));
    // printf("%c", fgetc(ptr));

    ptr = fopen("putcdemo.txt", "w");
    putc('s', ptr);
    putc('a', ptr);
    putc('y', ptr);
    putc('a', ptr);
    putc('n', ptr);
    fclose(ptr);

    return 0;
}