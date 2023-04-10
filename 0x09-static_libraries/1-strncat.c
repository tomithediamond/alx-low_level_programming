#include "main.h"

/*
 * _strncat - concactenates two strings using a maximum of n bytes from src
 * @dest: first input string
 * @src: second input string
 * @n: input value of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int y, k;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[y] = src[k];
		y++;
		k++;
	}
	dest[y] = '\0';

	return (dest);
}
