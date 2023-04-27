#include <stdio.h>
/**
*main - the entry point
*
*Return: always 0
*/
int main(void)
{
	char rc;

	for (rc = 'z'; rc >= 'a'; rc--)
	{
		putchar(rc);
	}
	putchar('\n');
	return (0);
}
