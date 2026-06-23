//Write a program to input any number and check the given number is prime or not prime.
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f=1;
clrscr();
printf("enter any number=");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
f=0;
break;
}
}
if(f==1)
printf("given number is prime number=");
else
printf("given number is not prime number=");
getch();
}
