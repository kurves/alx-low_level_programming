#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: unsigned int
 * Description: A function that allocates memory usinh malloc
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *intb = malloc(b);

	if (intb == NULL)
	{
		exit(98);
	}
	return (intb);
	free(intb);
}
