#include "main.h"
/**
* print_diagonal - print "\"
* @n:number of times it is printed
*/
void print_diagonal(int n)
{
	int d, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (d = 0; d < n; d++)
	{
		for (k = 0; k < d; k++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
