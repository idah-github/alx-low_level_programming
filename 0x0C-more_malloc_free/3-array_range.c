#include "main.h"
#include <stdlib.h>
/**
*array_range - create arr of int
*@min: the min/first value
*@max: the max/last value
*
*Return: pointer to arr or NULL
*/
int *array_range(int min, int max)
{
	int *arr;
	int n, i = 0;

	if (min > max)
		return (NULL);
	n = max - min + 1;

	arr = malloc(sizeof(int) * n);
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
