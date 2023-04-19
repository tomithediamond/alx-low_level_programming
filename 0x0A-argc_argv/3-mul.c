#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer.
 * @s: the string
 * Return: the integer obtained from the conversion.
 */

int _atoi(char *s)
{
	int a, b, c, d, lon = 0, numb = 0;

	a = 0;
	b = 0;
	c = 0;
	d = 0;

	while (s[lon] != '\0')
		lon++;

	while (a < lon && d == 0)
	{
		if (s[a] == '-')
			b++;

		if (s[a] >= '0' && s[a] <= '9')
		{
			numb = s[a] - '0';

			if (b % 2)
				numb = -numb;
			c = c * 10 + numb;
			d = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);

	return (c);
}

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: array of arguments.
 * Return: 0 on success
 * 1 on error.
 */

int main(int argc, char *argv[])
{
	int no1, no2, multi;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	no1 = _atoi(argv[1]);
	no2 = _atoi(argv[2]);

	multi = no1 * no2;
	printf("%d\n", multi);

	return (0);
}
