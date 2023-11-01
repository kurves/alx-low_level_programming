#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - a function that concantenates
 * @ac: number of arguments
 * @av: array of characters
 * Description: A function that concantenates all the arguments of a program
 * Return: Integer value
*/
char *argstostr(int ac, char **av)
{
	int i, j, sum = 0;
	char *concat_str;

	if (ac <= 0)
	{
		return (NULL);
	}
	if (av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		sum += strlen(av[i]);
	}
	concat_str = (char *)malloc(sum + ac + 1);
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac; i++)
	{
		strcpy(concat_str + j, av[i]);
		j += strlen(av[i]);
		if (i < ac - 1)
		{
			concat_str[j++] = '\n';
		}
	}
	concat_str[j++] = '\n';
	return (concat_str);
	free(concat_str);
}
