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
	int temp;

	e = n - 1;
	s = 0;
	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}

