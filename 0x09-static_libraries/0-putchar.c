#include <unistd.h>

/*
 * _putchar - writes the character c to stdout.
 * @c: the character to write.
 * Retuurn: 1 on success
 * On error, -1 is returned and errno set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
