#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*print_array - prints elements of an arra
*@a: the array val
*@n: elements of the array
*
*Return: void
*/
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		if (arr == 0)
			printf("%d", a[arr]);
		else
			printf(", %d", a[arr]);
	}
	printf("\n");
}
