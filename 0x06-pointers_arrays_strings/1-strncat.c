#include "main.h"


/**
 * _strncat - concactenates two strings.
 * @src: the source string
 * @dest: the destination string
 * @n: input value
 * Return: a pointer to the resulting string destination.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
			}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
