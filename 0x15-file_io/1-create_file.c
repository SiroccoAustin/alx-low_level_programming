#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of file
 * @text_content: content
 * Return: 1 if successful and -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wd;

	mode_t mode = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		wd = write(fd, text_content, strlen(text_content));
		if (wd == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
