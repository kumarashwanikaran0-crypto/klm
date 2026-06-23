// Write a program to print the number print using pointer.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a=50;
    int *p=&a;

    printf("Value = %d", *p);
    getch();
}