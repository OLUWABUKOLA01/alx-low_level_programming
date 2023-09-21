#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for (; n > a; a++)
		dest[a] = '\0';

	return (dest);
}
