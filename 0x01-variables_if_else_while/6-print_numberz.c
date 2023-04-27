#include <stdio.h>
/**
* main - entry point
* Return: will be 0
*/
int main(void)
{
	int num;

	for (num  = 0; num <= 9; num++)
	{
		putchar(num + 48);
	}
	putchar('\n');
	return (0);
}
