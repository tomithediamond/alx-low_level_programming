#include "main.h"


/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 */


void more_numbers(void)
{
	int r,s;

	for (r = 1; r <= 10; r++)
	{
		for (s = 0; s <= 14; s++)
		{
			if (s >= 10)
				_putchar('1');
			_putchar((s % 10) + '0');
		}
			_putchar('\n');
	}
}
