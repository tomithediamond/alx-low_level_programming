#include "main.h"

/*
 * _memcpy - a function that copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to be copied
 * Return: newly copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int j = n;

	for (; k < j; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
