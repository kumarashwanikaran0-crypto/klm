//Write a program to input any two number and print the greatest number.

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter any two no=");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("%d is greater",a);
}
else
{
printf("%d is the greatest number",b);
}
getch();
}
