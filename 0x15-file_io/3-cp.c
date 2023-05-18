#include "main.h"
/**
 * main - main function
 * @argc: first parameter
 * @av: second parameter
 * Return: always return 0
 */

int main(int argc, char *av[])
{
	char *buffer[BUFSIZE];

	int copy, file_to, file_from, wr, loop = 1;

	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	while (loop != 2)
	{
		copy = read(file_from, buffer, BUFSIZE);
		if (copy == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		}
		wr = write(file_to, buffer, BUFSIZE);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
		loop++;
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
