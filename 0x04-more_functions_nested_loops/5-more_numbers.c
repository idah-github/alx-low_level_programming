#include "main.h"
/**
*more_numbers1 - prints numbers 10X
*
*Retun: always #
*/
void more_numbers(void)
{
	int a;
	int b;

	b = a;

	while (b < 10)
	{
		a = 48;
		while (a <= 14)
		{
			_putchar(a);
			a++;
		}
		_putchar ('\n');
		b++;
	}
