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

	char *buffer;

	buffer = malloc(strlen(text_content));

	fd = creat(filename, O_RDWR);

	if (fd != -1)
	{
		write(fd, buffer, strlen(text_content));
		return (1);
	}
	return (-1);

}
