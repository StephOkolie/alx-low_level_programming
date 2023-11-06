#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a struct dog.
 * @d: Struct dog to free.
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
