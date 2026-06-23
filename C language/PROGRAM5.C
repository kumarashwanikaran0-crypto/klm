//Write a program to check whether a number is even or odd.
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter number=");
scanf("%d",&n);
if(n%2==0)
printf("even number");
else
printf("odd number");
getch();
}
