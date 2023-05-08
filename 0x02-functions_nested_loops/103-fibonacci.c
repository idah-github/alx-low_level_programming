#include <stdio.h>
/**
*main - entry point
*prints the sum of even number in fibonaccii
*
*Return: #0
*/
int main(void)
{
	int i;
	unsigned long int f, s, nxt, sum;

	f = 1;
	s = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (f < 400000 && (f % 2) == 0)
		{
			sum = sum + f;
		}
		nxt = f + s;
		f = s;
		s = nxt;
	}
	printf("%lu\n", sum);

	return (0);
}
