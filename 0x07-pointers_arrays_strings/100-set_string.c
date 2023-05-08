#include "main.h"
#include <stdio.h>
/**
*set_string - double pointer
*@s: pointer to pointer to
*@to: chaar pointer
*
*/
void set_string(char **s, char *to)
{
	/*char c;
	*to = &c;
	*s = &to;
	*/
	*s = to;
}
