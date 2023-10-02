#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_file - checks if files can be opened.
 * @fd_from: file_from.
 * @fd_to: file_to.
 * @argv: number of arguments.
 *
 * Return: void.
 */

void error_file(int fd_from, int fd_to, char *argv[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program that copy content of file to another file.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return:  0.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, err_close;
	ssize_t x, y;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fd_from, fd_to, argv);

	x = 1024;
	while (x == 1024)
	{
		x = read(fd_from, buff, 1024);
		if (x == -1)
			error_file(-1, 0, argv);
		y = write(fd_to, buff, x);
		if (y == -1)
			error_file(0, -1, argv);
	}

	err_close = close(fd_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	err_close = close(fd_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
