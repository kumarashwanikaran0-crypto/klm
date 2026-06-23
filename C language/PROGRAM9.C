//Write a program to input any decimal number and convert it into octal number and hexa-decimal number.
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter decimal integer=");
scanf("%d",&n);
printf("octal no=%o",n);
printf("\nhexadecimal=%x",n);
getch();
}