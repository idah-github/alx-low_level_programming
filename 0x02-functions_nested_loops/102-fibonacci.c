#include <stdio.h>
/**
*main - prints firt 50 Fibonacci numbers
*
*Return: #0
*/
int main(void)
{
	long int n, nxt;
	long int f = 1;
	long int s = 2;

	for (n = 1; n <= 50; n++)
	{
		if (f != 20365011074)
		{
			printf("%ld, ", f);
		}
		else
		{
			printf("%ld\n", f);
		}
		nxt = f + s;
		f = s;
		s = next;
	}
	return (0);
}
