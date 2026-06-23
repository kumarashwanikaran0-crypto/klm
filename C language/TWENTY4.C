#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k,l,p;
clrscr();
printf("enter the number of lines=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
printf(" ");
}
for (k=1;k<=i;k++)
{
printf("%d",k);
}
p=i-1;
for(l=1;l<i;l++)
{
printf("%d",p);
p--;
}
printf("\n");
}
getch();
}