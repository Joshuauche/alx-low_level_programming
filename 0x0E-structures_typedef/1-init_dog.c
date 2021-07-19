#include "dog.h"


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->age = age;
	d->name = name;
	d->owner = owner;

}

