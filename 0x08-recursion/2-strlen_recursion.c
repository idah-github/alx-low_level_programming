#include "main.h"
/**
*_strlen_recursion - finds the len of a str
*@s: the str
*Return: the length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
