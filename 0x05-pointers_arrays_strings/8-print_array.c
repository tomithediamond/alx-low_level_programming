#include "main.h"
#include <stdio.h>


/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: the array of integers
 * @n: number of elements of the array to be printed
 */


void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < (n -  1); q++)
	{
		printf("%d, ", a[q]);
	}
	if (q == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
