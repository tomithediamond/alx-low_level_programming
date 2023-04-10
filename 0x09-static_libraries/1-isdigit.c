#include "main.h"

/*
 * isdigit - checks for digits from 0 to 9.
 * @c: the integer to check
 * Return: 1 if c is a digit, else 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
