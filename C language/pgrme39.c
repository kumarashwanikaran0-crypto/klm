#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str[100];

    clrscr();

    printf("Enter any string: ");
    scanf("%s", str);

    strrev(str);

    printf("\nReverse string = %s", str);

    getch();
}