// Write a program to input n element and
// display them unity pointer and array.

#include<stdio.h>
#include<conio.h>
void main()
{
int ar[20], i, n, *ptr, s = 0;
ptr = ar;
clrscr();
printf(" enter the no of elements : ");
scanf(" %d", &n);
printf(" enter elements : \n");
for (i = 0; i < n; i++)
scanf(" %d", ptr + i);
for (i = 0; i < n; i++)
s = s + *(ptr + i);
printf(" sum of all elements = %d", s);
getch();
}