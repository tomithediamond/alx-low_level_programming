#include "main.h"


/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the integer converted
 * 0 if no numbers in the string
 */


int _atoi(char *s)
{
	int a, b, c, d, len, f;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	len = 0;
	f = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && f == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			d = s[a] - '0';
			if (b % 2)
				d = -d;
			c = c * 10 + d;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (c);
}
