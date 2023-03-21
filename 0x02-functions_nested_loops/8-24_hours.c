#include "main.h"


/**
 * 24_hours - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 */

void jack_bauer(void)

{
	int f, g;

	for (f = 0; f < 24; f++)
	{
		for (g = 0; g < 60; g++)
		{
			_putchar((f / 10) + '0');
			_putchar((f % 10) + '0');
			_putchar(':');
			_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
			_putchar('\n');
		}
	}
}
