#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @o: the int to be checked.
 * Return: the value of the last digit of the int.
 */


int print_last_digit(int o)

{
	int a;

	if (o < 0)
	o = -o;

	a = o % 10;
	if (a < 0)
	a = -a;

	_putchar(a + '0');

	return (a);
}
