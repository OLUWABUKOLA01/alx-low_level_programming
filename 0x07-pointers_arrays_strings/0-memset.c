#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: first function
 * @b: second function
 * @n: third function
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		s[y] = b;
	return (s);
}
