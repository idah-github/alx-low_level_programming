#include <stdio.h>
#include <stdlib.h>
/**
*main - returns prints the minimum number of coins to make
*change for an amount of money.
*@argc: number of arg
*@argv: array store for arg
*
*Return: if error 1 else 0
*/
int main(int argc, char *argv[])
{
	int res, n, i;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	res = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	i = 0;
	while (i < 5 && n >= 0)
	{
		while (n >= c[i])
		{
			res++;
			n -= c[i];
		}
		i++;
	}
	printf("%d\n", res);
	return (0);
}
