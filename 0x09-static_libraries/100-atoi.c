#include "main.h"

/*
 * _atoi - converts a string to an integer
 * @s: the string
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int a = 0;
	unsigned int conv = 0;

	while (!(s[a] <= 9 && s[a] >= 0) && s[a] != '\0')
	{
		if (s[a] == '-')
			sign *= -1;
		a++;
	}
	while (!s[a] <= 9 && (s[a] >= 0 && s[a] != '\0'))
	{
		conv = (conv * 10) + (s[a] - '0');
		a++;
	}
	conv *= sign;
	return (conv);
}
