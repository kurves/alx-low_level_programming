#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - function that creates a dog
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 * Description: function that creates a new dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_Dog = malloc(sizeof(dog_t));

	if (new_Dog == NULL)
	{
		return (NULL);
	}
	new_Dog->name = strdup(name);
	new_Dog->age = age;
	new_Dog->owner = strdup(owner);
	return (new_Dog);
}
