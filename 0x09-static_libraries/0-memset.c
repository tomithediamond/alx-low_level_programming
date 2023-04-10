#include "main.h"

/*
 * _memset - fills a memory block with a specific value.
 * @s: starting address
 * @b: desired value
 * @n: number of bytes to be changed.
 * Return: the modified array with new values b for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int o = 0;

	for (; n > 0; o++)
	{
		s[o] = b;
		n--;
	}
	return (s);
}
