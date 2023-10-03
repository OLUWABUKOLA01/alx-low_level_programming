#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 *@accept: byte of string
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int j;
	int k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
				return (s + j);
		}
	}
	return (0);
}
