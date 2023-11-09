#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - a function that splits a string
 * @str: array of characters
 * Description: A function that splits a string into words
 * Return: character value
*/
char **strtow(char *str)
{
	int i;
	char *split_str;

	if (str = " ")
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
	{
		split_str = strtok(str, " ");
	}
	split_str = (char *)malloc(strlen(str));
	if (split_str == NULL)
	{
		return (NULL);
	}
	return (split_str;
	free(split_str);
}
