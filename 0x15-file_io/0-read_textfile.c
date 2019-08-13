#include "holberton.h"
/**
 * read_textfile - read and print to stdout.
 * @filename: name of file of argv[1].
 * @letters: letters to prints.
 * Return: number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t bytes;
	int fd, check = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	bytes = read(fd, buf, letters);
	check = write(STDOUT_FILENO, buf, bytes);
	if (check < 0 || check != bytes)
	{
		free(buf);
		return (0);
	}

	free(buf);

	close(fd);

	return (check);
}
