#include  "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - a function that checks for a palindrome
 * @*s: string
 * Description: A function that checks if a string is a palindrome recursively
 * Return: Integer value
 */
int is_palindrome(char *s)
{

	if (strlen(s) == 0)
	{
		return (0);
	}
	if (s[0] != s[strlen(s) - 1])
	{
		return (1);
	}
	return (is_palindrome(s + 1));
}
