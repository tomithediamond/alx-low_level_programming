#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initialized with a specific char.
 * @size: size of array
 * @c: char to assign
 * Description: assign char c to an array of size size created
 * Return: On success, pointer to array
 * on fail, NULL is returned.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int f;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (f = 0; f < size; f++)
		str[f] = c;
	return (str);
}
