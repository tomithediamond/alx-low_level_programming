#include <stdio.h>


/**
 * main - prints the sum of all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5.
 * Return: Always 0.
 */

int main(void)
{
	int f, g = 0;

	for (f = 0; f < 1024; f++)
	{
		if ((f % 3) == 0 || (f % 5) == 0)
		{
			g += 0;
		}
		printf("%d\n", g);
	}
}
