#include <stdio.h>
/**
*main - entry point
*Return: returns
*/
int main(void)
{
	int numc;

	for (numc = 48; numc <= 57 ; numc++)
	{
		putchar(numc);
		if (numc == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
