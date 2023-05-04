#include "main.h"
/**
*_strcmp - compare str
*@s1: str 1
*@s2: str2
*Return: 0 if equal
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
