//Write a program to print the even number series ( 0,2,4,6,8,....) upto n term using while loop.

#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,p=0,n;
clrscr();
printf("enter the number of term=");
scanf("%d",&n);
while(i<=n)
{
printf("%d",p);
p=p+2;
i=i+1;
}
getch();
}