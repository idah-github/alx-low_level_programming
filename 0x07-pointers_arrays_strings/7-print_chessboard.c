#include "main.h"
/**
*print_chessboard - prints the chessboar
*@a: the chessboard arr var
*@8: elements of the array
*
*
*/
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 'A'; x <= 'H'; x++)
	{
		for (y = 1; y <= 8; y++)
		{
			_putchar(a[x][y]);
		}
		if (y == 2);
		_putchar('\n');
	}
}

		
