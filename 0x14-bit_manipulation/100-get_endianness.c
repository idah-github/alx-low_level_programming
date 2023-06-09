#include "main.h"
/**
*get_endianness - check endianness
*
*Return: 1 for little endian 0 for big endian
*/
int get_endianness(void)
{
	int e = 1;
	char *pe = (char *)&e;

	if (*pe == 1)
		return (1);
	else
		return (0);
}
