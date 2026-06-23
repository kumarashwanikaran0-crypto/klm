//Write a program to sort array element in
//ascending order using selection sort.

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[50], n, i, j, min, temp;

    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
	scanf("%d", &a[i]);

    for(i=0; i<n-1; i++)
    {
	min = i;
	for(j=i+1; j<n; j++)
	{
	    if(a[j] < a[min])
		min = j;
	}

	temp = a[i];
	a[i] = a[min];
	a[min] = temp;
    }

    printf("\nSorted array:\n");
    for(i=0; i<n; i++)
	printf("%d ", a[i]);

    getch();
}