#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: is the char to be checked.
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise return 0.
 */


int _isalpha(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);

	else if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
