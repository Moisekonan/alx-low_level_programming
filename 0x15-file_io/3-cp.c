#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "main.h"

/**
 * main - Copies the content of a file-from to another file
 * @argc: Numbers of args
 * @argv: List of arguments
 * Return: Return 0 on success otherwise 97, 98, 99, 100
 **/
int main(int argc, char **argv)
{
	char buffer[1024];
	int fd_from, fd_to, b_readed, b_writed;

	if (argc != 3)
		print_error("Usage: cp file_from file_to", "", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file ", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error_1("Error: Can't write to ", argv[2], 99, fd_from);

	b_readed = read(fd_from, buffer, 1024);
	while (b_readed > 0)
	{
		b_writed = write(fd_to, buffer, b_readed);
		if (b_readed != b_writed)
			print_error_1("Error: Can't write to ", argv[2], 99, fd_from);

		b_readed = read(fd_from, buffer, 1024);
	}

	if (b_readed == -1)
		print_error("Error: Can't read from file ", argv[1], 98);

	b_readed = close(fd_from);
	if (b_readed < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	b_writed = close(fd_to);
	if (b_writed < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}

/**
 * print_error_1 - Print the error and close the file descriptor
 * @msg: Error message to show
 * @opt: Optional arguments
 * @status: Exit status code
 * @fd1: File descriptor
 **/
void print_error_1(char *msg, char *opt, int status, int fd1)
{
	if (fd1 > 0)
		close(fd1);

	print_error(msg, opt, status);
}

/**
 * print_error - Print the error and close the file descriptor
 * @msg: Error message to show
 * @opt: Optional arguments
 * @status: Exit status code
 **/
void print_error(char *msg, char *opt, int status)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, opt);
	exit(status);
}
