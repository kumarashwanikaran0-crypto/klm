//Write a program to print the following series up to n terms. 1,2,5,10,17,26,......n terms.

#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,p=1,a=1;
clrscr();
printf("enter the number of term=");
scanf("%d",&n);
do
{
printf("%d\n",p);
p=p+a;
a=a+i;
i=i+1;
}
while(i<=n);
getch();
}