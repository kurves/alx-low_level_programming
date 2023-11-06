#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * print_dog - function o print struct dog
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog
 * Return: nothin
 * Description: struct of a dog
 */
void print_dog(struct dog *d)
{
	printf("Name:%s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age:%.2f\n", (d->age != 0) ? d->age : "(nil)");
	printf("Name: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
