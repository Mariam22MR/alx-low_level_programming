#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - return pointer to 2 dimensional array of int
 * @width: int
 * @height: int
 * Return: Null
 */
int **alloc_grid(int width, int height)
{
	int **tap, i, j;

	if (width <= 0 || height <= 0 || tap == 0)
		return (NULL);

	tap = (int **) malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		tap[i] = (int *) malloc(sizeof(int) * width);
		if (tap[i] == NULL)
		{
			free(tap);
			for (j = 0; j <= i; j++)
				free(tap[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tap[i][j] = 0;
		}
	}
	return (tap);
}
