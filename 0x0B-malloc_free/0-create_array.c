#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that cerates and array
 * @size: size of aaray
 * @c: character string
 * Description: A function that creates an array of characters
 * Return: Integer value
 */
char *create_array(unsigned int size,  char c)
{
	char *char_s;

	char_s = malloc(sizeof(c) * size);
	char_s[0] = 'K';
	if (size == 0)
	{
		return (NULL);
	}
	else if (char_s == NULL)
	{
		return (NULL);
	}
	return (0);
}
