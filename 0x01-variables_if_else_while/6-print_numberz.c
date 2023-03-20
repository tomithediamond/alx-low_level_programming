#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all base 10 single digits from 0 using putchar.
 * Return: Always 0.
 */

int main(void)
{
	int single;

	for (single = '0'; single <= '9'; single++)
		putchar(single);
	putchar('\n');
	return (0);
}
