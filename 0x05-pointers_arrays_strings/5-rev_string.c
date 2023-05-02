#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*rev_string - reverses a string
*@s: the string var
*Return:void
*
*/
void rev_string(char *s)
{
	int l = strlen(s);
	int i;

	for (i = 0; i < l / 2; i++)
	{
		char rv = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = rv;
	}
}
