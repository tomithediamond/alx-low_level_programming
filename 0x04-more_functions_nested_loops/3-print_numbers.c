#include "main.h"


/**
 * print_numbers - prints numbers from 0 to 9, followed by a new line.
 * Return: Always 0.
 */


void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar("%d", n);
	}
	_putchar("\n");
}
