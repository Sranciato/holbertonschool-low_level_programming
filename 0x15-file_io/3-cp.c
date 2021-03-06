#include "holberton.h"
/**
 * main - copy file content into another file.
 * @argc: arg count.
 * @argv: file names.
 * Return: int.
 */
int main(int argc, char *argv[])
{
	int check;

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
	check = file_read(argv[1], argv[2]);
	if (check == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (check == 2)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	return (0);
}
/**
 * file_read - reads content of filefrom into a buffer.
 * @filefrom: file we are copying.
 * @fileto: file we are copying to.
 * Return: size t.
 */
int file_read(char *filefrom, char *fileto)
{
	ssize_t bytes, bytes2;
	int fd1, fd2;
	char buf[1024];

	fd1 = open(filefrom, O_RDONLY);
	if (fd1 == -1)
		return (1);
	fd2 = open(fileto, O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (fd2 < 0)
		fd2 = open(fileto, O_TRUNC | O_WRONLY);
	if (fd2 == -1)
		return (2);
	while (bytes)
	{
		bytes = read(fd1, buf, 1024);
		if (bytes == -1)
			return (1);
		bytes2 = write(fd2, buf, bytes);
		if (bytes2 == -1 || bytes != bytes2)
			return (2);
	}
	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);

	return (0);
}
