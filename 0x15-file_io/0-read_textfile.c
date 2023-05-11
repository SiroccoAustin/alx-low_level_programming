#include "main.h"

/**
 * read_textfile - reads text of the file
 * @filename: name of the file
 * @letters: number of bytes
 * Return: number of bytes printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytes, count;

	char *buffer;

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bytes = read(fd, buffer, letters);

	count = write(STDOUT_FILENO, buffer, bytes);

	close(fd);

	return (count);
}
