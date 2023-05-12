#include "main.h"

/**
 * append_text_to_file - append text at the end of the file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 if successful and -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	if (fd != -1)
	{
		write(fd, text_content, strlen(text_content));
		return (1);
	}
	close(fd);
	return (-1);
}
