#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - returns a pointer to a 2 dimensional array of integers
*@width: arr width
*@height: arr height
*
*Return: Null or the pointer to the arr
*/
int **alloc_grid(int width, int height)
{
	int **a;
	int b = 0;
	int c = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}
	while (b < height)
	{
		a[b] = (int *)malloc(sizeof(int) * width);
		if (a[b] == NULL)
		{
			free(a);
			for (; c <= b; c++)
				free(a[c]);
			b++;
			return (NULL);
		}
		while (c < width)
		{
			a[b][c] = 0;
			c++;
		}
		return (a);
	}
}
