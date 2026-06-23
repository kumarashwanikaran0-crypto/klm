//10,20,30,40,50......n.print it in for loop.

#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,p=10;
clrscr();
printf("enter the number of term=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d\n",p);
p=p+10;
}
getch();
}