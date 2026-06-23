//Write a program to print 1 to n natural number.

#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n,p=1;
clrscr();
printf("enter the number of term=");
scanf("%d",&n);
do
{
printf("%d\n",p);
p=p+1;
i=i+1;
}
while (i<=n);
getch();
}
