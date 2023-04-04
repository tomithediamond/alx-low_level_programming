#include "main.h"
#include <stdio.h>


/**
 * rot13 -  encodes a string.
 * @r: input string
 * Return: r
 */


char *rot13(char *r)
{
	int a, b;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char drot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; r[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (r[a] == d1[b])
			{
				r[a] = drot[b];
				break;
			}
		}
	}
	return (r);
}
