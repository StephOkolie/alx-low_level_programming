#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocation rid
 * @height: hieght of the grid
 * @width: width of the grid
 *
 * Return: 0 if negative
 */

int **alloc_grid(int width, int height)
{
	int k, l, m, n;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (k = 0; k < height; k++)
	{
		a[k] = malloc(sizeof(int) * width);

		if (a[k] == NULL)
		{
			for (l = k; l >= 0; l--)
			{
				free(a[l]);
			}
			free(a);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			a[m][n] = 0;
		}
	}
	return (a);
}
