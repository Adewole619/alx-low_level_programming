#include "dog.h"
#include <stdlib.h>

/*
 *free dog - free memory held by pased struct.
 * @d: The dog to be freed.
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		reture;
	{

		free(d->owner);
		free(d->name);
		free(d);
	}
}

