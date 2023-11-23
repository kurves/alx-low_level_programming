#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_binary - binary representation of int
 * @n: character of strings
 * Description: function that prints binary representation of int
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}
