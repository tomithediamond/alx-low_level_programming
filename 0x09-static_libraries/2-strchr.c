#include "main.h"
#include <stddef.h>

/*
 * _strchr - entry point
 * @s: input
 * @c: input
 * return: Always 0
 */

char *_strchr(char *s, char c)
{
	int g = 0;

	for (; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
			return (&s[g]);
	}
	return (0);
}
