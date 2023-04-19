#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concactenates two strings into a newly allocated memory space
 * @s1: the first string
 * @s2: the second string
 * Return: On success, the concactenated string
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int a, b;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	con = malloc(sizeof(char) * (a + b + 1));
	if (con == NULL)
		return (NULL);

	while (s1[a] != '\0')
	{
		con[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		con[a] = s2[b];
		a++;
		b++;
	}

	con[a] = '\0';
	return (con);
}


