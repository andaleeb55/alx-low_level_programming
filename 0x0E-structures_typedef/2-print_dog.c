#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog into stdout
 * @d: reference to struct dog
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;
	char *nil = "(nil)";

	if (!d)
		return;

	name = d->name;
	owner = d->owner;

	printf(
			"Name: %s\nAge: %f\nOwner: %s\n",
			name ? name : nil,
			d->age,
			owner ? owner : nil
			);
}
