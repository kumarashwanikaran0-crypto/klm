// Write a program to input any string and
//the count number of charcters in given string.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str[100];
    int c;

    clrscr();

    printf("Enter any string: ");
    scanf("%s", str);

    c = strlen(str);

    printf("\nNo of characters = %d", c);

    getch();
}