//Write a program to print the series ( 1,11,111,1111,11111...)up to n term using while loop.

#include<stdio.h>
#include<conio.h>
void main()
{
long int i=1,p=1,n;
clrscr();
printf("enter the number of term=");
scanf("%ld",&n);
while(i<=n)
{
printf("%ld\n",p);
p=p*10+1;
i=i+1;
}
getch();
}