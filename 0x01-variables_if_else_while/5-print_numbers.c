#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all base 10 single digits from 0.
 * Return: Always 0.
 */

int main(void)
{
	int sd;

	for (sd = 0; sd < 10; sd++)
		printf("%d", sd);
	printf("\n");
	return (0);
}
