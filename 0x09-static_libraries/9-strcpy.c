#include "main.h"
#include <stdio.h>
/**
* *_strcpy - copy string pointed to
*@dest: pointer to wher we copy str
*@src: str being copied
*Return: to pointer
*
*/
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (src[l] != '\0')
		l++;
	i = 0;
	while (i < l)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

