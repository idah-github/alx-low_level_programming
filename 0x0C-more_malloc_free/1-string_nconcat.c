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
	unsigned int len, len1, i, k;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len = strlen(s2);
	if (n >= len)
		n = len;
	str = malloc(strlen(s1) + 1 + n);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (k = 0; k < n; k++)
		str[i + k] = s2[k];
	str[i + k] = '\0';
	return (str);
}
