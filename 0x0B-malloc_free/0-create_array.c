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

	if (size == 0)
	{
		return (NULL);
	}
	char_s = malloc(sizeof(c) * size);

	if (char_s == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		char_s[i] = c;
	}
	return (char_s);
	free(char_s);
}
