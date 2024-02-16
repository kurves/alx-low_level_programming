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
