#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str1[50], str2[50];
    int result;

    clrscr();

    printf("Enter first string:\n");
    gets(str1);

    printf("Enter second string:\n");
    gets(str2);

    result = strcmp(str1, str2);

    if(result > 0)
        printf("First string is greater");
    else if(result < 0)
        printf("Second string is greater");
    else
        printf("Both strings are equal");

    getch();
}