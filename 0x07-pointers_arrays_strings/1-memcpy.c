#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: first function
 * @src: second function
 * @n: third function
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
		src[z] = dest[z];
	return (dest);
}
