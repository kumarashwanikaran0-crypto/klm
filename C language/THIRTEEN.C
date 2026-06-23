//Write a program to input three number and print the greatest number.

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,g;
clrscr();
printf("enter three no=");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
g=a;
else
g=c;
}
else
{
if(b>c)
g=b;
else
g=c;
}
printf("greatest no=%d",g);
getch();
}
