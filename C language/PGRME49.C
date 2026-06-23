// Write a program to print the number value swaping using pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
int a=10, b=20, temp;
int *p=&a, *q=&b;
temp = *p;
*p = *q;
*q = temp;
printf("a = %d b = %d", a, b);
getch();
}