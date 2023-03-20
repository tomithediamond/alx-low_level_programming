#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - prints different combinations of three digits.
 * Return: 0.
 */


int main(void)

{
	int x, y, z;

	for (x = '0'; x < '8'; x++)
	{
	for (y = '1'; y < '9'; y++)
	{
	for (z = '2'; z <= '9'; z++)
	{
	if (x != y && y != z && x != z && y > x && z > y)
	{
	putchar(x);
	putchar(y);
	putchar(z);
	if (x != 7 && y != 8)
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
