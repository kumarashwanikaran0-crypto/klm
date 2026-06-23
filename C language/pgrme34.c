#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10][10], r, c, i, j, s = 0;

    clrscr();

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &a[i][j]);

    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            s = s + a[i][j];

    printf("\nSum of elements = %d", s);

    getch();
}