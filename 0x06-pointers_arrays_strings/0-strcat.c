#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strcat - concats two string
 * @dest: destination string
 * @src: sourcestring
 * Return: destination when executed succesfully
 */
char *_strcat(char *dest, char *src)
{
	/*make pointer point to the end of the destination string*/
	char *pointer = dest + strlen(dest);

	/*append character to the source of the dest */
	while (*src != '\0')
	{
		*pointer++ = *src++;
	}
	*pointer = '\0';


	return (dest);
}
