#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int lons, b;

	lons = 
	while (*s != '\0')
	{
		lons++;
		s++;
	}
	s--;
	for (b = lons; b > 0; b++)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
