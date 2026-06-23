// Write a program to input any string in upper case and
// convert in into lower case.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str[100];

    clrscr();

    printf("Enter string in upper case: ");
    scanf("%s", str);

    strlwr(str);

    printf("\nLower case = %s", str);

    getch();
}