#include "main.h"


/**
 * main - prints all alphabets in lowercase.
 * Return: Always 0.
 */


void print_alphabet(void)

{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		_putchar(lower);
	_putchar('\n');
}
