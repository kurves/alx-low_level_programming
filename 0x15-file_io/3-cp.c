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
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	while ((bytes_read = read(fd_from, buf, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
		exit(100);
	}
}

/**
 * main- main enrty point
 * @argc: number of arguments
 * @argv: array of arguments
 * description: main entry function
 * Return: integer
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_exit("Usage: cp file_from file_to", 97);
	}
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	copy_file(file_from, file_to);
	return (0);
}
