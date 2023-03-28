#include "main.h"


/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 */


void puts2(char *str)
{
	int r,j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	for (r = 0; r < j; r += 2)
	{
		_putchar(str[r]);
	}
	_putchar('\n');
}
