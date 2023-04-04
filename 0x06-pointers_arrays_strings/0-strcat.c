#include "main.h"


/**
 * _strcat - concactenates two strings.
 * @src: the source string
 * @dest: the destination string
 * Return: a pointer to the resulting string destination.


char *_strcat(char *dest, char *src)
{
	int a;
	int b;

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
