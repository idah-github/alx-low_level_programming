#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _strncat - copy a string
*@dest: str to copy to
*@src: str beimg copied
*@n: bytes being copied
*
*Return: final str/result
*/
char *_strncat(char *dest, char *src, int n)
{
	int c = 0;

	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}

