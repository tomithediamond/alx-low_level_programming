#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - prints all possible combination of two different digits.
 * Return: Always 0.
 */


int main(void)

{
	int s, b;

	for (s = '0'; s <= '8'; s++)
	{
	for (b = '1'; b <= '9'; b++)
	{
		if (b > s)
		{
		putchar(s);
		putchar(b);
		{
		if (s != 8 && b != 9 && sb != 89)
		putchar(',');
		putchar(' ');
		}
		}
	}
	}
	putchar('\n');
	return (0);
}
