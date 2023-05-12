#include "main.h"
/**
*_strspn - get len of pref-substring
*@s: the string
*@accept: has chars to match in s
*
*Return: number of bytes in s with bytes from
*accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (f);
		}
	}
	return (f);
}
