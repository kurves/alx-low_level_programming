#include  "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - a function that checks for a palindrome
 * @s: string
 * Description: A function that checks if a string is a palindrome recursively
 * Return: Integer value
 */
int is_palindrome(char *s)
{
 	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	if (s[0] == s[len - 1])
	{
		return (1);
	}
	else
	{
		return (is_palindrome(s + 1));
	}
}
