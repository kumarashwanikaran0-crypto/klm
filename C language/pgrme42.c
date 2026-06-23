#include <stdio.h>
#include <conio.h>

void main()
{
    char str[100];
    int i = 0, c = 0;

    clrscr();

    printf("Enter any sentence: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
            c = c + 1;

        i = i + 1;
    }

    printf("\nNumber of words = %d", c + 1);

    getch();
}