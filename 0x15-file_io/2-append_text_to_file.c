#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*append_text_to_file - add text at end of filr
*@filename: pointer to filename
*@text_content: str to dd to end of file
*
*
*Return: 1 on success else -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int  res;

	if (!filename)
		return (-1);
	FILE *file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-1);
	}
	if (text_content)
	{
		res = fwrite(text_content, sizeof(char), strlen(text_content), file);
		if (res < strlen(text_content))
		{
			fclose(file);
			return (-1);
		}
		fclose(file);
		return (1);
	}
}

