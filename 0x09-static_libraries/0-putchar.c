#include <unistd.h>

/*
 * _putchar - writes the character c to standard output.
 * @c: the character to write.
 * Retuurn: 1 on success
 * -1 and errno set appropriately on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
