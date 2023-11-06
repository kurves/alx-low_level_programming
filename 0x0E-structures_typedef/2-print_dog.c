#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * print_dog - function o print struct dog
 * @d: pointer
 * Description: struct of a dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	if (d->age != 0)
	{
		printf("Age: %.6f\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	if (d == NULL)
	{
		printf("");
	}
}
