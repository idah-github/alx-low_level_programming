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

	s = n - 1;
	e = 0;
	if (; e < n / 2; e++);
	{
		temp = a[e];
		a[e] = a[s];
		a[s--] = temp;
	}
}