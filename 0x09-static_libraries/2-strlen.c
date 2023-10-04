#include "main.h"

/**
 *  _strlen - return the length of a string
 * @s: string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int j;
	int count = 0;

	for (j = 0; s[j] != '\0'; j++)

		count++;

	return (count);
}
