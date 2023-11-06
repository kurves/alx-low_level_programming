#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * free_dog - function that frees dogs
 * @d: pointer
 * Description: fuction that frees dogs from memory
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
