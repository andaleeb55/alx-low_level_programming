#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int namel, ownerl;

	if (!name || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	namel = strlen(name);
	ownerl = strlen(owner);

	d->name = malloc((namel + 1) * sizeof(char));
	if (!d->name)
		goto free_dog;

	d->owner = malloc((ownerl + 1) * sizeof(char));
	if (!d->owner)
		goto free_name;

	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;

	return (d);

free_name:
	free(d->name);
free_dog:
	free(d);
	return (NULL);
}
