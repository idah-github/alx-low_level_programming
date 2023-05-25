#include <stdlib.h>
#include <stdio.h>
/**
* main - print machn code instr of its fun
*@argc: arg count
*@argv: arg arr
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int bts;
	int n = 0;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bts = atoi(argv[1]);

	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	while (n < bts)
	{
		if (n == bts - 1)
		{
			printf("%02hhx\n", arr[n]);
			break;
		}
		printf("%02hhx ", arr[n]);
		n++;
	}
	return (0);
}

