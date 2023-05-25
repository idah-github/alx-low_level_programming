#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - print numbers
*@separator: str btwn nums
*@n: int to be passed
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list num;

	va_start(num, n);
	for (; i < n; i++)
	{
		/*
		 * if (!separator)
		 */
		printf("%d", va_arg(num, int));
		if (!separator && i == 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
