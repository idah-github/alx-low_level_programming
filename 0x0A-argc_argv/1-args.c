#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the agr count
*@argc: counts arg
*@argv: stores arg
*Return: return 0 if no error
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
		printf("%d\n", argc - 1);
		return (0);
}
