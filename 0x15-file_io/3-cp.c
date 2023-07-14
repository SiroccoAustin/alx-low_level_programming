#include "main.h"
#define BUFFER 1024

/**
 * main - main function
 * @ac: number of arguments
 * @av: list
 * Return: always return 0
 */

int main (int ac, char *av[])
{
	int file_to, file_from;
	ssize_t rd, wd;
	char buf[BUFFER];
	if (ac < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[2]);
		exit(98);
	}
	rd = 1024;
	while (rd == 1024)
	{
		rd = read(file_from, buf, BUFFER);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		wd = write(file_to, buf, rd);
		if (wd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);

	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	return (0);
}
