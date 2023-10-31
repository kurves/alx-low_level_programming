#include  "main.h"
#include <string.h>
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
	int len_str;
	char *str_dup;

	if (str == NULL)
	{
		return (NULL);
	}
	len_str = strlen(str);

	str_dup = (char *)malloc(len_str + 1);

	if (str_dup == NULL)
	{
		return (NULL);
	}
	strcpy(str_dup, str);
	return (str_dup);
	free(str_dup);
}
