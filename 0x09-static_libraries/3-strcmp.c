#include "main.h"

/*
 * _strcmp - compares string values
 * @s1: value to compare with s2
 * @s2: value to compare with s1
 * Return: s1[a] - s2[a]
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != 0 && s2[a] != 0)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
