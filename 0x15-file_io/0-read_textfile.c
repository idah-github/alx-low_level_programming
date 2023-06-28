#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
/**
*read_textfile -  read txtfilr and print it POSIX stdout
*@filename: pointer to file
*@letters: num of letter to be rd and wr
*
*Return: the number of bytes read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr, of;
	char *rbuffer;

	if (filename == NULL)
		return (0);
/*
	*of = open(filename, O_RDONLY);
	*if (of == -1)
		*return (0);
		*/

	rbuffer = malloc(sizeof(char) * letters);
	if (rbuffer == NULL)
	{
		/*close(of);*/
		return (0);
	}

	of = open(filename, O_RDONLY);
	rd = read(of, rbuffer, letters);
	wr = write(STDOUT_FILENO, rbuffer, rd);

	if (of == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(rbuffer);
		return (0);
	}
	free(rbuffer);
	close(of);

	return (wr);
}
