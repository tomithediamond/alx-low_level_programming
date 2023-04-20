#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int v;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (v = 0; v < size; v++)
	{
		if (cmp(array[v]))
			return (v);
	}

	return (-1);
}
