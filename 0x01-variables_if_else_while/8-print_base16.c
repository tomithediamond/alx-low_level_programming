#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all numbers of base16 in lowercase.
 * Return: Always 0.
 */

int main(void)

{
	int num;
	char let;

	for (num = 0; num <= 9; num++)
		putchar(num);

	for (let = 'a'; let <= 'f'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
