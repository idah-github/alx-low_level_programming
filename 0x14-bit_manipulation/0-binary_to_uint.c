#include "main.h"
/**
*binary_to_uint - convert binary to unsigned int
*@b: pointer to 0,1 store
*
*Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dnum = 0;

	if (!b)
	{
		return (0);
	}
	for (; *b != '\0'; b++)
		if (*b != '0' && *b != '1')
			return (0);
	dnum = (dnum << 1) + (*b - '0');

	return (dnum);
}

