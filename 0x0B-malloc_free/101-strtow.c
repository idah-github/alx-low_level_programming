#include "main.h"
#include <stdlib.h>
/**
*strtow - split string in2
*@str: the str
*
*
*Return: the pointer to str / NULL
*/
char **strtow(char *str)
{
	char **mtx, *temp;
	int i, wrd, srt, en;
	int k = 0, len = 0, g = 0;
	int flg = 0;

	for (len = 0; str[len]; len++)
	{
		if (str[len] == ' ')
			flg = 0;
		else if (flg == 0)
		{
			flg = 1;
			wrd++;
		}
	}
	if (wrd == 0)
		return (NULL);
	mtx = (char **) malloc(sizeof(char *) * (wrd + 1));
	if (mtx == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		if (g)
		{
			en = i;
			temp = (char *) malloc(sizeof(char) * (g + 1));
			if (temp == NULL)
				return (NULL);
			while (srt < en)
				*temp++ = str[srt++];
			*temp = '\0';
			mtx[k] = temp - g;
			k++;
			g = 0;
		}
		else if (g++ == 0)
		srt = i;
		i++;
	}
	mtx[k] = NULL;
	return (mtx);
}

