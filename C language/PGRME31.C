//Write a program to sort array elements in
//ascending order using bubble sort.

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[50], n, i, j, temp;

    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0; i<n; i++)
	scanf("%d", &a[i]);

    for(i=0; i<n-1; i++)
    {
	for(j=0; j<n-i-1; j++)
	{
	    if(a[j] > a[j+1])
	    {
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
	    }
	}
    }

    printf("\nSorted array:\n");
    for(i=0; i<n; i++)
	printf("%d ", a[i]);

    getch();
}