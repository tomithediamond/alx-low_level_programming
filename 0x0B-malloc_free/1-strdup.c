#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies the string given as a parameter to a new memory space.
 * @str: the character
 * Return: pointer to the newly allocated space in memory
 */

char *_strdup(char *str)
{
	int a, b;
	char *grb;

	if (str == NULL)
		return (NULL);

	a = 0;
	while (str[a] != '\0')
		a++;

	grb = malloc(sizeof(char) * (a + 1));

	if (grb == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		grb[b] = str[b];

	return (grb);
}
