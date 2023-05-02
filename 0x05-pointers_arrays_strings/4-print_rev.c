#include "main.h"
#include <stdio.h>
/**
 *print_rev - prints a str in reverse
 *@s: the str holder
 *Return: void
 *
 *
 */
void print_rev(char *s)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	for (k = i - 1; k >= 0; k--)
	{
		putchar(s[k]);
	}
	putchar('\n');
}

