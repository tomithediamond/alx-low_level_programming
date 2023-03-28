#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 * @a: integer to swap.
 * @b: integer to swap.
 */

swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
