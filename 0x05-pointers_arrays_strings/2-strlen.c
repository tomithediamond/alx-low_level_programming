#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: string
 * Return: length of string.
 */

int _strlen(char *s)
{
	int longs;

	longs = 0;

	while (*s != '\0')
	{
		longs++;
		s++;
	}
	return (longs);
}
