#include "main.h"

/*
 * puts - prints a string, followed by a new line, to standard output
 * @s: the string to print
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
