#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - binary to unit
 * @b: character of strings
 * Description: function that prints that converts binary to uint
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	char c_char;

	if (b == NULL)
	{
		return (0);
	}
	while ((c_char = *b) != '\0')
	{
		if (c_char == '0' || c_char == '1')
		{
			res = (res << 1) | (c_char - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (res);
}
