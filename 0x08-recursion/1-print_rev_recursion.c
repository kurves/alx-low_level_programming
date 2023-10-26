#include  "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: characterstring
 * Description: A function that writes a string recursively in  reverse
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	for (int i len - 1;i >= 0, i --);
	{
		putchar(s[i]);
	}
	putchar("\n");


}
