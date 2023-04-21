#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("Sie of char: %d byte(s)", sizeof(char));
	printf("Size of int: %d byte(s)", sizeof(int));
	printf("Size of long int: %d byte(s)", sizeof(long int));
	printf("Size of float: %d byte(s)", sizeof(float));
	printf("Size of double: %d byte(s)", sizeof(double));
	printf("Size of long double: %d byte(s)", sizeof(long double));
	return (0);
}
