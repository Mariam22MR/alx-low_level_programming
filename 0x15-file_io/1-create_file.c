#include "main.h"

/**
* create_file - creates a file.
* @filename: name of file to creat.
* @text_content: content of file.
*
*
* Return: 1 on success, 0 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i]; i++);

	write(fd, text_content, i);
	close(fd);
	return (1);
}
