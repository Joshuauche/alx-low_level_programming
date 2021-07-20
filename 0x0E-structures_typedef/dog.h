#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: name parameter
 * @owner: owner parameter
 * @age: age parameter
 *
 * Description: dog struct which contains name, owner and age
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
#endif
