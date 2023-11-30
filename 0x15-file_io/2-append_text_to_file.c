#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - function to append text to file
 * @filename: fil to append text to
 * @text_content: content to be appended
 * Description: function that append file to text
 * Return: integer value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileopen;
	ssize_t WrittenBytes;

	if (filename == NULL)
	{
		return (0);
	}

	fileopen = open(filename, O_WRONLY | O_APPEND);

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
