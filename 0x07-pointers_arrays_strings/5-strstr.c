#include "main.h"
#include <stdio.h>
/**
*_strstr - locate substring
*@haystack:  str to search in
*@needle: sbustring
*
*Return: pointer to substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				j++;
			break;
		}
		if (!needle[j])
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}

