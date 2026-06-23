//write to n element in an array print greatest element and lowest element.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i;
int max,min;
clrscr();
printf("enter number of elements:");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min)
{
min=a[i];
}
}
printf("greatest element=%d\n",max);
printf("lowest element=%d\n",min);
getch();
}

