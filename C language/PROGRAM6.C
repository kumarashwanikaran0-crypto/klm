//Write a program to find largest of three numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter a =");
scanf("%d",&a);
printf("enter b =");
scanf("%d",&b);
printf("enter c =");
scanf("%d",&c);
if(a> b&& a>c)
printf("largest=%d",a);
else if(b>a && b>c)
printf("largest=%d",b);
else
printf("largest=%d",c);
getch();
}
