#include "main.h"

/*
 * _isupper - checks for uppercase letters.
 * @c: the character to check
 * Return: 1 if uppercase, else return 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
