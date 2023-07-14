#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: name of file
 * @text_content: content to append to a file
 * Return: 1 if successful and -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writec;

	if (!filename)
		return (0);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (0);
	if (text_content)
	{
		writec = write(fd, text_content, strlen(text_content));

		if (writec == -1)
			return (0);
	}
	close(fd);
	return (1);
}
