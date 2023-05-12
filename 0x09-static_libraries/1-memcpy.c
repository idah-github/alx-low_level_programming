#include "main.h"
/**
**_memcpy - memory data copy
*@dest: destination memory
*@src: source memory
*@n: bytes to be copied
*Return: pointer to dest memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int g = 0;

	for (; g < n; g++)
	{
		dest[g] = src[g];
	}
	return (dest);
}
