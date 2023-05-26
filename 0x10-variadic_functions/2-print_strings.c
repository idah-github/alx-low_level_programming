#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - prints trs
*@separator: separator btwn str
*@n: number of strs /arg
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;

	va_list strs;

	va_start(strs, n);

	for (; i < n; i++)
	{
		str = va_arg(strs, char *);
		if (!str)
			str = "(nil)";
		else
			printf("%s", str);
		if (!separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
