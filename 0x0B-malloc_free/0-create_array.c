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

	if (size == 0)
	{
		return (NULL);
	}
	else if (size == NULL)
	{
		return (NULL);
	}
	char_s = malloc(sizeof(c) * size)
	char_s[0] = 'K'
	putchar(char_s);
	return (0);
}
