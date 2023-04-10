#include "main.h"

/*
 * _strcpy - a function that copies a string
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int q = 0;
	int t = 0;

	while (*(src + q) != '\0')
	{
		q++;
	}
	for (; t < q; t++)
	{
		dest[t] = src[t];
	}
	dest[q] = '\0';
	return (dest);
}
