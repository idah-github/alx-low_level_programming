#include "main.h"
/**
*flip_bits - flip bis to change n to m
*@n: num1 to be changed
*@m: num2 tochange to
*
* Return: the bits fliped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp = n ^ m;
	unsigned long int fb = 0;

	for (; tmp > 0; tmp >>= 1)
	{
		if (tmp & 1)
			fb++;
	}
	return (fb);
}
