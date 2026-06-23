#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10][10], r, c, i, j, s=0, s1=0;

    clrscr();

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &a[i][j]);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j] % 2 == 0)
                s = s + a[i][j];
            else
                s1 = s1 + a[i][j];
        }
    }

    printf("\nSum of even elements = %d", s);
    printf("\nSum of odd elements = %d", s1);

    getch();
}