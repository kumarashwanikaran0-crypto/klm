#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k,l;
clrscr();
printf("enter the number of lines=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n-1;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("A");
}
for(l=1;l<i;l++)
{
printf("A");
}
printf("\n");
}
for(i=n-1;i>=1;i--)
{
for(j=1;j<=n-1;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("A");
}
for(l=1;l<i;l++)
{
printf("A");
}
printf("\n");
}
getch();
}



