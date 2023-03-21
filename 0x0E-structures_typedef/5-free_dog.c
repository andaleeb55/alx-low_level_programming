#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog struct memory
 * @d: the dog struct reference
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
