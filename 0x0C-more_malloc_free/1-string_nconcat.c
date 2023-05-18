#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*string_nconcat - add bytes string to another
*@s1: string 1 to add
*@s2: string 2 to conc from
*@n: bytes of s2
*Return: the resuting memory pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len, len1, i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len = (len1 + strlen(s2) + 1);
	if (n > len)
		n = len - 1;

	str = malloc(len);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[len1 + i] = s2[i];
	str[len + n] = '\0';
	return (str);
}

