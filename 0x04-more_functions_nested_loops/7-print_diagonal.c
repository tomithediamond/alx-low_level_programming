#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}else
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
}
