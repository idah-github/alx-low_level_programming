#include "main.h"
/**
*print_triangle - drwas a triangle
*
*@size: the tria size / number it prints
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	for (int a = 1; a <= size; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
