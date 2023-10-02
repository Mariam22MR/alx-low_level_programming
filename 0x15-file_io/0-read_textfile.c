#include "main.h"

/**
 * read_textfile - reads text file and prints letters.
 * @filename: name of file to read.
 * @letters: number of letters to read.
 *
 * Return: numbers of letters printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t x, y;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
		return (0);

	x = read(fd, buff, letters);
	y = write(STDOUT_FILENO, buff, x);

	close(fd);
	free(buff);

	return (y);
}
