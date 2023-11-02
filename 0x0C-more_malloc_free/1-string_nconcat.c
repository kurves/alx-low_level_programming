#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a function that joins two strings
 * @s1: string one
 * @s2:  string two
 * @n: unsigned int
 * Description: A function that concantenates two strings
 * Return: Integer value
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	if (n >= len_s2)
	{
		n = len_s2;
	}
	concat_str = (char *)malloc(len_s1 + n  + 1);
	if (concat_str == NULL)
	{
		return (NULL);
	}
	strcpy(concat_str, s1);
	strncat(concat_str, s2, n);
	return (concat_str);
	free(concat_str);
}
