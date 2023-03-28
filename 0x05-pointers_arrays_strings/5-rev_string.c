#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: the input string to be reversed
 * Return: string in reverse
 */


void rev_string(char *s)
{
	int counter, k;
	char rev = s[0];

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	for (k = 0; k < counter; k++)
	{
		counter--;
		rev = s[k];
		s[k] = s[counter];
		s[counter] = rev;
	}
}
