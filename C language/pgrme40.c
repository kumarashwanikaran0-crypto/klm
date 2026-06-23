#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str[100];

    clrscr();

    printf("Enter string in lower case: ");
    scanf("%s", str);

    strupr(str);

    printf("\nUpper case = %s", str);

    getch();
}