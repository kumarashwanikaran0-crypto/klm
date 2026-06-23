#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,s;
clrscr();
printf("enter the four number=");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a<b&&a<c&&a<d)
s=a;
else if (b<a&&b<c&&c<d)
s=b;
else if (c<a&&c<b&&c<d)
s=c;
else
s=d;
printf("smallest number=%d",s);
getch();
}