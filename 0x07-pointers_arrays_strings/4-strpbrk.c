#include  "main.h"
#include <stddef.h>
#include <stdio.h>
/**
*_strpbrk - search str for of any byte set
*@s: str to search
*@accept: str with the byte
*
*Return: * to byte in s matching on in accept
*NULL id no byte found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
			return (s);
			}
			j++
		}
		i++;
	}
	return (NULL);
}
