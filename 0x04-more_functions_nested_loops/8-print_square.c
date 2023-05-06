#include "main.h"
/**
*print_square - prints sqr #
*@size: the size of the sqr
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
		int h, w;

		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
