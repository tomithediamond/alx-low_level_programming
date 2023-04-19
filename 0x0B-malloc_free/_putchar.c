#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to write
 * Return: 1 on success
 * on error, -1 is returned and errno set appropriately
 */

int _putchar(char c)
{
	rturn (write(1, &c, 1));
}
