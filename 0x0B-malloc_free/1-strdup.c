#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*_strdup - return a pointer to  dup of a str
*@str: the string to be dup
*
*Return: the dup str or NULL
*/
char *_strdup(char *str)
{
	int len, i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	s = (char *)malloc(len * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
