#include <stdlib.h>
#include <stdio.h>
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
	printf("Name: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	printf("Age: %s\n", (d->age != 0) ? d->age != 0 ? "%.2f" : "(nil)" : "(nil)");
}
