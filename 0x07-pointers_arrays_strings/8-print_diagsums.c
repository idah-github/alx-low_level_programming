#include "main.h"
#include <stdio.h>
/**
*print_diagsums - sum of 2 diagonals of
*a sqr matrix of int
*@a: sqr matrix
*@size: size of the matrix
*
*/
void print_diagsums(int *a, int size)
{
	int d;
	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	d = 0;

	while (d < size)
	{
		sum1 += a[(size * d) + d];
		sum2 += a[(size * (d + 1)) - (d + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
