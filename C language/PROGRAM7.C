//Write a program to input radius of circle and print area & circumference of circle .

#include<stdio.h>
#include<conio.h>
void main()
{
float r,a,c;
clrscr();
printf("enter the radius of circle=");
scanf("%f",&r);
a=3.14*r*r;
c=2*3.14*r;
printf("area=%f",a);
printf("circumference=%f",c);
getch();
}