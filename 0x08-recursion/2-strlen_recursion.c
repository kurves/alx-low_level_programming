#include  "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  _strlen_recursion - a function that printsthe length of a string
 * @s: characterstring
 * Description: A function that prints the length of a string
 * Return: Len of string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 +  _strlen_recursion(s + 1));
}
