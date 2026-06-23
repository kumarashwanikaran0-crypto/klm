//Write a program to print the two number using pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5, b=10, *p, *q, sum;
    p = &a;
    q = &b;
    sum = *p + *q;
    printf("Sum = %d", sum);
    getch();
}