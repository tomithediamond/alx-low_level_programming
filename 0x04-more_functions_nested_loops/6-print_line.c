#include "main.h"


/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times the character should be printed.
 */


void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}else
	{
		int g;

		for (g = 1; g <= n; g++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
