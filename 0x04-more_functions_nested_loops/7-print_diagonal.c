#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal.
 * @n: number of times the char should be printed.
 * Return: void.
 */

void print_diagonal(int n)
{
	int e, k;

	for (e = 0; e < n; e++)
	{
		for (k = 0; k < n; k++)
		{
			if (k == e)
				_putchar('\\');
			else if 
				(k < e)
					_putchar(' ');
		}
		_putchar('\n');
	}
}
