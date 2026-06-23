// Write a program to input n elements and print the summation of
// all elements using pointer & array.

# include <stdio.h>
# include <conio.h>
void main()
{
int ar[20], i, n, *ptr, g, l;
ptr = ar;
clrscr();
printf(" enter the no of elements =");
scanf(" %d", &n);
printf(" enter elements =\n");
for (i=0; i<n; i++)
scanf(" %d", ptr+i);
for (i=0; i<n; i++)
{
if (i==0)
{
g = *(ptr+i);
l = *(ptr+i);
}
if (*(ptr+i) > g)
    g = *(ptr+i);

if (*(ptr+i) < l)
    l = *(ptr+i);
}
printf(" greatest element = %d and lowest element = %d", g, l);
getch();
}