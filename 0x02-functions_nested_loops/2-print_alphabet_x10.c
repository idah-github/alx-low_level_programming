#include "main.h"
/**
*print_alphabet_x10 - prints alphabet with new line
*Return - return void
*/
void print_alphabet_x10(void)
{
	int t;
	char c;

	for (t = 1; t <= 10; t++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	}
}
