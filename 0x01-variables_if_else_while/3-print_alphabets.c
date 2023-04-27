#include <stdio.h>
/**
* main - the entry point
*
*Return: return value
*/
int main(void)
{
	int lc;
	int uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		/* putchar('\n'); */
		putchar(uc);
	}
	return (0);
}




