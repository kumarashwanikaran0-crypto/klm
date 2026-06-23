//Write A Program To Find Area Of Circle.

#include<stdio.h>
#include<conio.h>
void main()
{
float r,area;
clrscr();
printf("enter radius=");
scanf("%f",&r);
area=3.14*r*r;
printf("area=%f",area);
getch();
}