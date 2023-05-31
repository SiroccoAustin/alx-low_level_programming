#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content inside of the file
 * Return: 1 if successful and -1 if not successful
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

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