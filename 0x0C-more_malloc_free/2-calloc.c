#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory
 * @nmemb: unsigned int
 * @size: size of aaray
 * Description: A function that allocates memory to an array
 * Return: Integer value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *char_s;

	if (size == 0)
	{
		return (NULL);
	}
	if (nmemb == 0)
	{
		return (NULL);
	}
	char_s = malloc(nmemb * size);

	if (char_s == NULL)
	{
		return (NULL);
	}
	if (char_s != NULL)
	{
		memset(char_s, 0, (nmemb * size));
	}
	return (char_s);
	free(char_s);
}
