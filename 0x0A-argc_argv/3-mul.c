#include <stdio.h>
#include <stdlib.h>
/**
*main - gets mul
*@argc: the number of arg
*@argv: arg store
*Return: 1 if no 2 arg
*/
int main(int argc, char *argv[])
{
	int a, b, res, c;

	for (c = 1; c < argc; c++)
	{
		if (argc == 3)
		{
			/*printf("%s, %s, %d,\n", argv[1], argv[2], res);*/
			a = atoi(argv[1]);
			b = atoi(argv[2]);
			res = a * b;
			printf("%d\n", res);
		}
		if (argc < 3 || argc > 3)
		{
			printf("Error\n");
			return (1);
		}
	}
}
