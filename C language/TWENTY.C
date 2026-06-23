//1,11,111,1111,11111.....n.print it in for loop.
#include<stdio.h>
#include<conio.h>
void main()
{
long int n,i,p=1;
clrscr();
printf("enter the number of n term=");
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
printf("%ld\n",p);
p=p*10+1;
}
getch();
}