#include "holberton.h"
/**
 * main - copy file content into another file.
 * @argc: arg count.
 * @argv: file names.
 * Return: int.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_read(argv[1], argv[2]);
	return (0);
}
/**
 * file_read - reads content of filefrom into a buffer.
 * @filefrom: file we are copying.
 * @fileto: file we are copying to.
 * Return: size t.
 */
size_t file_read(char *filefrom, char *fileto)
{
	size_t bytes;
	int fd;
	char *buf;

	fd = open(filefrom, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
	buf = malloc(1024);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	bytes = read(fd, buf, 1024);
	if (bytes < 1)
	{
		free(buf);
		return (0);
	}
	file_create(fileto, buf);

	free(buf);

	close(fd);

	return (1);
}
/**
 * file_create - write to new file.
 * @fileto: new file.
 * @text_content: text to be copied.
 * Return: size_t.
 */
size_t file_create(char *fileto, char *text_content)
{
	int fd;
	size_t check = 0;

	if (fileto == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(fileto, O_RDWR | O_TRUNC | O_CREAT, 0664);
		if (fd == -1)
			return (0);
		return (1);
	}

	fd = open(fileto, O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
	check = write(fd, text_content, 1024);
	if (check < 1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't write to %s", fileto);
		exit(99);
	}

	close(fd);

	return (1);
}
