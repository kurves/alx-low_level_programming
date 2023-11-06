/**
 * struct dog - dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog
 *
 * Description: struct of a dog
 */
struct dog *d(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner
	return (d);
}
