#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*str_concat - add 2 strs and return pointer to new str
*@s1: first str
*@s2: second str
*
*Return: ponter to final str or NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len, i = 0;

	len = (strlen(s1) + strlen(s2)) + 1;
	str = (char *)malloc(len * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (; *s1 != '\0'; i++)
	{
		str[i] = *s1;
		s1++;
	}
	for (; *s2 != '\0'; i++)
	{
		str[i] = *s2;
		s2++;
	}
	str[i] = '\0';
	return (str);
}
