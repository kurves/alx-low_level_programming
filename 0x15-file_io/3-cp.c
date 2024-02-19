#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * copy_file_contents - function to copy fike
 * @file_from: file to copy from
 * @file_to: file to copy to
 * Description: function that copies content from to another
 * Return: integer value
 */
void copy_file_contents(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buf[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT, 0664)
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		close(fd_from);
		exit(99);
	}
	while ((bytes_read = read(fd_from, buf, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
		exit(100);
	}
}

/**
 * main - main enrty point
 * @ac: number of arguments
 * @av: array of arguments
 * description: main entry function
 * Return: integer
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	copy_file_contents(av[1], av[2]);
	return (0);
}
