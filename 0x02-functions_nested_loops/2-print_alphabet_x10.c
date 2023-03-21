#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphabets ten times.
 */


void print_alphabet_x10(void)

{
	char lett;
	int a;

	for (a = 1; a < 10; a++)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
		{
		_putchar(lett);
		}
		_putchar('\n');
	}
}
