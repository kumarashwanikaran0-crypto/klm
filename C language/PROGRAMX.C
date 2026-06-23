//Write a program to input three number and print the greatest number using ternary operator.
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the first number a =");
scanf("%d",&a);
printf("enter the second number b =");
scanf("%d",&b);
printf("enter the third number c =");
scanf("%d",&c);
if(a>b&&a>c)
printf("%d is greatest no",a);
else if (b>a&&b>c)
printf("%d is greatest no",b);
else
printf("%d is greatest no",c);
getch();
}