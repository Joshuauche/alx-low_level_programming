#include "hast_tables.h"


/**
 * key_index - returns the key index of a key
 * @key: key parameter
 * @size: size parameter
 * Return: the key and size using the hash_djb2 function
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(&key), size);
}
