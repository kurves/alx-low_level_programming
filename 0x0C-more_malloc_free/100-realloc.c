#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocate memory
 * @ptr: pointer
 * @old_size: size of memory
 * @new_size: size of memory
 * Description: A function that reallocates memory to an array
 * Return: Integer value
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int char_s;
	void *new_char_s;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == 0)
	{
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}
	char_s = (old_size < new_size) ? old_size : new_size;
	new_char_s = malloc(new_size);
	if (new_char_s == NULL)
	{
		return (NULL);
	}
	memcpy(new_char_s, ptr, char_s);
	return (new_char_s);
	free(ptr);
}
