#include "main.h"


/**
 * _strncpy - copies a string.
 * @src: the source string
 * @dest: the destination string
 * @n: input value
 * Return: a pointer to the string destination.
 */


char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
