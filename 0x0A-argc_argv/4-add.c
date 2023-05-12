#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int c, sum = 0, a;

	if (argc < 1)
		printf("0\n");

	for (c > 1; c < argc; c++)
	{
		/*
		 * if ()
			*printf("Error\n");
			*return (1);
			*printf("%s\n", argv[c]);
			*/
			sum = sum + atoi(argv[c]);
			printf("%d\n", sum);
	}
}



