#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - return the string length
 * @s: character parameter
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);

}

/**
 * _strcpy - copies string from source to destination
 * @dest: dest parameter
 * @str: source parameter
 * Return: dest
 */
char *_strcpy(char *dest, char *str)
{
	int i, len;

	len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		*(dest + i) = *(str + i);
	}
	*(dest + i) = '\0';

	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (len1 + 1));

	if (dog->name == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
