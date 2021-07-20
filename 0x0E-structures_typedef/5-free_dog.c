#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees the dog memory
 * @d: only parameter
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}

