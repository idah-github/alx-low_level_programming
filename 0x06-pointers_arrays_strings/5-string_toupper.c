#include "main.h"
/**
*string_toupper - change lowercase char to uppercase
*@s: the string
*Return: the string
*
*
*
*/
char *string_toupper(char *s)
{
	/*char *s;*/
	int c = 0;

	for (; s[c] != '\0'; c++)
	{
		if (s[c] >= 'a' && s[c] <= 'z')
			s[c] = s[c] - 32;
	}
	return (s);
}
