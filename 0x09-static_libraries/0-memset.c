#include "main.h"
/**
* *_memset -  fills the first n bytes of the memory area pointed to
* by s with the constant byte b
*@s: memory
*@b: the char being copied
*@n: number of times to copy
*Return: the memory pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		s[k] = b;
		k++;
	}
	return (s);
}
