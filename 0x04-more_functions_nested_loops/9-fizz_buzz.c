#include <stdio.h>
/**
* main - is the entry point
* Return: will be 0#
*/
int main(void)
{
	int fb;

	for (fb = 1; fb <= 100; fb++)
	{
		if (fb % 3 == 0)
			printf("Fizz");
		else if (fb % 5 == 0)
			printf("Buzz");
		else if (fb % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", fb);
		if (fb < 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
