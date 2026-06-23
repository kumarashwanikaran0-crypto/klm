//Write a program to following pyramid series.
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("enter the number of lines=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf("*");
printf("\n");
}
getch();
}