#include "main.h"


/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: copy destination
 * @src: copy source
 * Return: the pointer to destination
 */


char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	dest[b++] = '\0';
	return (dest);
}
