#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: the file name
 * @text_content: the text content
 * Return: 1 on success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (length = 0; text_content[length] != 0; length++)
		;

	status = write(fd, text_content, length);
	close(fd);

	return (status == -1 ? -1 : 1);
}
