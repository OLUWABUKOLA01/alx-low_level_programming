#include "main.h"
#include <stdlib.h>
/**
 * _strdup - pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 *
 * Return: pointer to a new string which is a duplicate of the string
 */
char *_strdup(char *str)
{
	char *x;
	int y, z;

	if (str == NULL)
		return (NULL);

	for (y = 0; str[y] != '\0'; y++)
	;

	x = malloc(y * sizeof(char) + 1);
	if (x == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < y; z++)
		x[z] = str[z];
	x[z] = '\0';

	return (x);
}
