#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: reference to struct dog
 * @name: the dog's name (cstring)
 * @age: the dog's age
 * @owner: the dog's owner name (cstring)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
