#include "main.h"
#include <stdlib.h>
/**
*argstostr - conca args of the prog
*@ac: arg count
*@av: pointer to arr ac
*Return: pointer to new str /NULL
*/
char *argstostr(int ac, char **av)
{
	int a, b;
	int c = 0;
	int size = 0;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			size++;
		}
		size++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			arg[c] = av[a][b];
			c++;
		}
		arg[c] = '\n';
		c++;
	}
	arg[c] = '\0';
	return (arg);
}
