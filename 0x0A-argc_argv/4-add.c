#include <stdio.h>
#include <stdlib.h>
/**
* main- return the sum
* @argc: arg count
* @argv: the arg store
*
*Return: 1 if not number
*/
int main(int argc, char *argv[])
{
	int c, sum = 0;

	if (argc < 1)
		printf("0\n");

	for (c = 1; c < argc; c++)
	{
		if (*argv[c] >= '0' && *argv[c] <= '9')
		{
			sum = sum + atoi(argv[c]);
			printf("%d\n", sum);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}



