#include "main.h"
/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: Value
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int a, b, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ar[a] = malloc(sizeof(int) * width);
		if (ar[a] == NULL)
		{
			while (a >= 0)
			{
				free(ar[a]);
				a--;
			}
			free(ar);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	for (c = 0; c < width; c++)
		ar[b][c] = 0;
	return (ar);
}
