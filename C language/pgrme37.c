#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10][10], r, c, i, j, g, l;

    clrscr();

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &a[i][j]);

    g = l = a[0][0];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j] > g)
                g = a[i][j];
            if(a[i][j] < l)
                l = a[i][j];
        }
    }

    printf("\nGreatest = %d", g);
    printf("\nSmallest = %d", l);

    getch();
}