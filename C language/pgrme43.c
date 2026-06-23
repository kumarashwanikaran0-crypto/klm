#include <stdio.h>
#include <conio.h>

void main()
{
    char str[100];
    int i = 0, c = 0, s = 0;

    clrscr();

    printf("Enter any word: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 90)
            c = c + 1;
        else if(str[i] >= 97 && str[i] <= 122)
            s = s + 1;

        i = i + 1;
    }

    printf("\nNo of capital letters = %d", c);
    printf("\nNo of small letters = %d", s);

    getch();
}