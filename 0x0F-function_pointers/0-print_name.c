#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
/**
 * print_name - function that prints a name
 * @name: name
 * @PrintName: function printer
 * Description: function that prints a name
 * Return: Nothing
 */
void print_name(char *name, PrintName printer)
{
	if (name != NULL && printer != NULL)
	{
		printer(name);
	}
}
