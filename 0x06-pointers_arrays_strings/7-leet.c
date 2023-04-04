#include "main.h"


/**
 * leet -  encodes a string into 1337.
 * @r: input string
 * Return: r
 */


char *leet(char *r)
{
	int f, g;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (f = 0; r[f] != '\0'; f++)
	{
		for (g = 0; g <  10; g++)
		{
			if (r[f] == c1[g])
			{
				r[f] = c2[g];
			}
		}
	}
	return (r);
}
