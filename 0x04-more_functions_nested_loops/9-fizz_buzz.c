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
		if (fb % 3 == 0 && fb % 5 != 0)
			printf("Fizz");
		else if (fb % 5 == 0 && fb % 3 != 0)
			printf("Buzz");
		else if (fb % 3 == 0 && fb % 5 == 0)
			printf("FizzBuzz");
		else if (fb == 1)
			printf("%d", fb);
		else
			printf("%d", fb);
	}
	printf("\n");
	return (0);
}
