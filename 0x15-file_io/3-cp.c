#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - copies the content of a file to another file.
*@argc: arg count
*@argv: arg store, arr.
*
* Return: #
*/
int main(int argc, char *argv[])
{
	int filef, filet, rd, wr;
	char buffer[1024];

	if (argc !=3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filef = open(argv[1], O_RDONLY);
	if (filef == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	filet = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (filet == -1)
	{
		dprintf(STDERR_FILENO, "Error:Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((rd = read(filef, buffer, 1024)) > 0)
	{
		wr = write(filet, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		       exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(filef) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filef);
		exit(100);
	}
	if (close(filet) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filet);
		exit(100);
	}
	return (0);
}
