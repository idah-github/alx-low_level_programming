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
	else
	{
		in w, h;

		for (w = 0; w < size; w++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

