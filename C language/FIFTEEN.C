#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,ch;
clrscr();
printf("enter the numbers");
scanf("%d%d",&a,&b);
printf("enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("addition=%d",a+b);
break;
case 2:
printf("substraction=%d",a-b);
break;
case 3:
printf("multiply=%d",a*b);
break;
case 4:
printf("division=%d",a/b);
break;
default:
printf("invalid choice");
}
getch();
}

