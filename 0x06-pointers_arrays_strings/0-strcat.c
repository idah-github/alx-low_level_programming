#include "main.h"
#include <stdio.h>

/**
*_strcat - concatenates 2 str
*@dest: str to append to
*@src: str to be appended
*Return: return the str dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
