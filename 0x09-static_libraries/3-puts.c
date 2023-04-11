#include "main.h"

/*
 * puts - prints a string, followed by a new line, to standard output
 * @str: the string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
