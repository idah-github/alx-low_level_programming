#include <stdio.h>
#include <stdlib.h>
/**
*main - return the argv
*@argc: the arg count
*@argv: arr of args
*Return: null
*/
int main(int argc, char *argv[])
{
	int a = 0;

	for (; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
