#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - function to read text file
 * @filename: fil to be read
 * @letters: number of letters to be read
 * Description: function that reads a file and returns number of bytes
 * Return: size_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fileread;
	char *buffer;
	ssize_t bytesRead, WrittenBytes;

	if (filename == NULL)
	{
		return (0);
	}
	fileread = fopen(filename, "r");

	if (fileread == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		fclose(fileread);
		return (0);
	}
	bytesRead = fread(buffer, 1, letters, fileread);

	if (bytesRead == -1)
	{
		free(buffer);
		fclose(fileread);
		return (0);
	}
	fclose(fileread);

	WrittenBytes = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	if (WrittenBytes != bytesRead)
	{
		return (0);
	}
	return (WrittenBytes);
}
