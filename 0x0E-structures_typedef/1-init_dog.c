#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: varaible parameter
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 */
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

