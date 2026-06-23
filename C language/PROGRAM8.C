//write a program five digit number and print the remainder after dividing by 3.
#include<stdio.h>
#include<conio.h>
void main()
{
int n,r;
clrscr();
printf("enter the 5 digit number=");
scanf("%d",&n);
r=n/3;
printf(" dividing by 3=%d",r);
getch();
}