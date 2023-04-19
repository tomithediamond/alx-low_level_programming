#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array grid
 * @height: height of array grid
 * Return: pointer to 2 dimensional array on success
 * NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int c, d;
	int **xo;

	if (width <= 0 || height <= 0)
		return (NULL);

	xo = malloc(sizeof(int *) * height);

	if (xo == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		xo[c] = malloc(sizeof(int) * width);

		if (xo[c] == NULL)
		{
			for (; c >= 0; c--)
				free(xo[c]);

			free(xo);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
			xo[c][d] = 0;
	}

	return (xo);
}
