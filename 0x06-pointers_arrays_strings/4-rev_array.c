#include "main.h"


/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers
 * @n: number of elements of the array
 */


void reverse_array(int *a, int n)
{
	int d, e;

	d = 0;
	for (d < n--; d++)
	{
		e = a[d];
		a[d] = a[n];
		a[n] = e;
	}
}
