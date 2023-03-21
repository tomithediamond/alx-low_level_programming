#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - prints possible combinations of two two-digits numbers.
 * Return: 0.
 */


int main(void)

{
        int u, v;
	
	for (u = 0; u <= 98; u++)
	{

	for (v = 1; v <= 99; v++)
	{
	putchar((u / 10) + '0');
	putchar((u % 10) + '0');
	putchar((v / 10) + '0');
	putchar((v % 10) + '0');
	if (u < v)
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
