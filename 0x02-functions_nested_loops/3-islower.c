#include "main.h"
/**
*_islower - checkes if lowercase
*@c:value to be compared
*Return: will be #
*/
int _islower(int c)
{
	/*char c;*/
	if (c == 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
