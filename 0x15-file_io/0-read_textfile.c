#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name to be read
 * @letters: the number of letter to be read
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, output, length = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)  /* if malloc failed*/
		return (0);

	length = read(fd, buffer, letters); /*get length of printed char*/
	buffer[length + 1] = '\0';
	close(fd);
	if (length == 0) /* if no char to print*/
	{
		free(buffer); /* free allocate memory*/
		return (0);
	}

	output = write(STDOUT_FILENO, buffer, length); /*write char to stdout*/

	if (output == -1)
		return (0);

	free(buffer);
	return (output);
}
