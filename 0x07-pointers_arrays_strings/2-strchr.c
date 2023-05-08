#include "main.h"
#include <stddef.h>

/**
**_strchr - Returns a pointer to the first occurrence
* of the character in a string
*@s: string
*@c: the char to be found
*
*Return: pointer to first occurence of c in s
*/
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
		if (s == 0)
			return (NULL);
	}
	if (*s == c)
		return (s);
	return (NULL);
}
