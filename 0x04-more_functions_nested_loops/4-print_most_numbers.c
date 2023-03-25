#include "main.h"


/**
 * print_most_numbers - prints numbers from 0 to 9, excluding 2 and 4.
 */


void print_most_numbers(void)
{
	int k;
	for (k = 0; k <= 9; k++)
	{
		if (!(k == 2 || k == 4))
			_putchar(k);
	}
	_putchar('\n');
}
