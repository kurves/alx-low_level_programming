#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - function to initialize
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog
 * Return: nothin
 * Description: struct of a dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
