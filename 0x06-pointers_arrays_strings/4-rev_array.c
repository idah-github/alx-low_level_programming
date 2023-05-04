#include "main.h"
/**
*reverse_array - revese array content
*@a: the arr
*@n: arr size
*
*Return: void
*
*/
void reverse_array(int *a, int n)
{
	int s, e;

	e = 0;
	while (e < n / 2);
	{
		a[e] = a[n - e - 1];
		a[n - e - 1] = s;
		e++;
	}
}
