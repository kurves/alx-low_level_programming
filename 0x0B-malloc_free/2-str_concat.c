#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that joins two strings
 * @s1: string one
 * @s2:  string two
 * Description: A function that concantenates two strings
 * Return: Integer value
*/
char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2;
	char *concat_str;

	if (s1 == NULL  || s2 == NULL)
	{
		return (NULL);
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	concat_str = (char *)malloc(len_s1 + len_s2 + 1);
	if (concat_str == NULL)
	{
		return (NULL);
	}
	strcpy(concat_str, s1);
	strcat(concat_str, s2);
	return (concat_str);
	free(concat_str);
}
