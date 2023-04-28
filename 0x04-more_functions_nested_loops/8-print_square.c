#include "main.h"
/**
* print_square  - draw a sqr, #,
*@size: sqr size
*
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	int h = 0;

	while (h < size)
	{
		int w = 0;

		while (w < size)
		{
			if (h == 0 || h == size - 1 || w == 0 || w == size - 1)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
			w++;
		}
		_putchar('\n');
		h++;
	}
}

