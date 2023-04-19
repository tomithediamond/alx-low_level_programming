#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: input
 * @av: input
 * Return: pointer to a new string
 * NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int e, f;
	int g = 0, h = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (e = 0; e < ac; e++)
	{
		for (f = 0; av[e][f]; f++)
			h++;
	}
	h += ac;

	str = malloc(sizeof(char) * h + 1);

	if (str == NULL)
		return (NULL);

	for (e = 0; e < ac; e++)
	{
		for (f = 0; av[e][f]; f++)
		{
			str[g] = av[e][f];
			g++;
		}
		if (str[g] == '\0')
		{
			str[g++] = '\n';
		}
	}
	return (str);
}
