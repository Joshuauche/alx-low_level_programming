#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: dog variable pareameter
 */
void print_dog(struct dog *d)
{
	float age = age;
	char *name = name;
	char *owner = owner;

	if (d != NULL)
	{
		printf("Name: %s \n", (d->name) ? d->name : "(nil)");
		printf("Age: %f \n", (d->age) ? d->age : 0);
		printf("Owner: %s \n", (d->owner) ? d->owner : "(nil)");
	}

}

