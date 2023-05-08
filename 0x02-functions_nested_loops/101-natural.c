#include <stdio.h>
/**
*main - the entry point; calculates the
*sum of multiples of 3 and 5 below 1024
*
*Return: #0
*/
int main(void)
{
	unsigned long int sum, num1, num2;
	int i = 0;

	sum = 0;
	num1 = 0;
	num2 = 0;

	for (; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			num2 = num2 + i;
		}
		else if ((i % 5) == 0)
		{
			num1 = num1 + i;
		}
	}
	sum = num2 + num1;
	printf("%lu\n", sum);
	return (0);
}
