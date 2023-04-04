#include "main.h"


/**
 * _strcat - concactenates two strings.
 * @src: input source string
 * @dest: input string to be appended to
 * Return: a pointer to the destination string.


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
