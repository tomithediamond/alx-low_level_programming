#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int u;

	if (array == NULL || action == NULL)
		return;

	for (u = 0; u < size; u++)
	{
		action(array[u]);
	}
}
