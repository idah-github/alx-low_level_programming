#include "main.h"
/**
*create_file - create a file
*@filename: pointer to filename
*@text_content: pointer to content to write to file
*
*Return: 1 if success else -1
*/
int create_file(const char *filename, char *text_content)
{
	int of, wr, len;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);
	if (text_content)
	{
		len = 0;
		while (text_content[len])
			len++;
	}
	of = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(of, text_content, len);
	if (of == -1 || wr == -1)
	{
		/*close(of);*/
		return (-1);
	}
	close(of);
	return (1);
}
