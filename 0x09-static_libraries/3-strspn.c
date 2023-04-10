#include "main.h"

/*
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int b;
	unsigned int c = 0;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				c++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (c);
		}
		s++;
	}
	return (c);
}
