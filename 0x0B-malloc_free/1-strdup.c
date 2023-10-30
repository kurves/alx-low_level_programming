#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that creates a pointer
 * @str: character string
 * Description: A function that returns a pointer to newly allocated memory
 * Return: Integer value
 */
char *_strdup(char *str)
{
	char *char_s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	len_str = strlen(str);
	str_dup = malloc(sizeof(str) * (len_str + 1);

	if (str_dup == NULL)
	{
		return (NULL);
	}
	return (str_dup);
	free(strr_s);
}
