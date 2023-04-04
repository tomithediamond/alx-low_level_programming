#include "main.h"


/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @k: the string
 * Return: modified string k
 */

char *string_toupper(char *k)
{
	int u;

	u = 0;
	while (k[u] != '\0')
	{
		if (k[u] >= 'a' && k[u] <= 'z')
			k[u] = k[u] - 32;
		u++;
	}
	return (k);
}
