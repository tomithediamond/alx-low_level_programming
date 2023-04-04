#include "main.h"


/**
 * _strcat - concactenates two strings src and dest.
 * @src: input string
 * @dest: input string to be appended to
 */


char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
