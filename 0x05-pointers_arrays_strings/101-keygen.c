#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASS_LEN 10
/**
*main- the entry point
*
*Return: return null
*
*/
int main(void)
{
	int  i = 0;
	char pass[PASS_LEN + 1];

	srand(time(NULL));

	for (; i < PASS_LEN; i++)
	{
		pass[i] = rand() % 94 + 33;
	}
	pass[PASS_LEN] = '\0';
	printf("%s\n", pass);

	return(0);
}
