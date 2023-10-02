#include "main.h"

/**
* append_text_to_file - appends text to the file.
* @filename: name of the file to create.
* @text_content: content of file.
*
* Return: 1 on success, 0 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	write(fd, text_content, i);
	close(fd);
	return (1);
}
