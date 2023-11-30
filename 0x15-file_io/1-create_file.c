#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
#include <fcntl.h>

/**
 * create_file - function to create text file
 * @filename: fil to be created
 * @text_content: content to be written
 * Description: function that creates a file with given content
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int fileopen;
	ssize_t  WrittenBytes;

	if (filename == NULL)
	{
		return (-1);
	}
	fileopen = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fileopen == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		WrittenBytes = write(fileopen, text_content, strlen(text_content));
		if (WrittenBytes == -1)
		{
			close(fileopen);
			return (-1);
		}
	}
	close(fileopen);
	return (1);
}
