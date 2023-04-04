#include "main.h"


/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements of the array
 */


void reverse_array(int *a, int n)
{
	int d, e;

	d = 0;
	while (d < n--)
	{
		e = a[d];
		a[d] = a[n];
		a[n] = e;
	}
	d++;
}
