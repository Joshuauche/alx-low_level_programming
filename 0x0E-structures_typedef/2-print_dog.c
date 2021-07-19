#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: dog variable pareameter
 */
void print_dog(struct dog *d)
{
	float age = age;
	char *name = name;
	char *owner = owner;

	if (d->age == '\0' || d->name == NULL || d->owner == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("Name: %s \n", d->name);
		printf("Age: %f \n", d->age);
		printf("Owner: %s \n", d->owner);
	}

}

