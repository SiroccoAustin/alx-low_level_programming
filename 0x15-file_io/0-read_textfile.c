#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads and writes contents of the file
 * @filename: name of the file
 * @letters: size of content to write
 * Return: number of content written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t readc, writec;

	char *buf = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	readc = read(fd, buf, letters);

	if (readc == -1)
		return (0);

	writec = write(STDOUT_FILENO, buf, readc);

	if (writec == -1)
		return (0);


	close(fd);
	free(buf);
	return (writec);
}
