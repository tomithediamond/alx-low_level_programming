#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations of single digit numbers.
 * Return: Always 0.
 */


int main(void)

{
	int s;

	for (s = '0'; s <= '9'; s++)
	{
	putchar(s);
	if (s != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
