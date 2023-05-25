#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - add the arg / nums
*@n: arg count
*
*Return: the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, s = 0;

	va_list num;

	va_start(num, n);
	while (s < n)
	{
		sum += va_arg(num, int);
		s++;
	}
	va_end(num);
	return (sum);
}
