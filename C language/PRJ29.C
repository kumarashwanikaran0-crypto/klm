//Write a program to input 5 elements and display them.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
printf("enter 5 elements=\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("elements are=\n");
for(i=0;i<5;i++)
printf("%d\n",a[i]);
getch();
}