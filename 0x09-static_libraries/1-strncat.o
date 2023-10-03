#include "main.h"
#include <string.h>
/**
 * *_strncat -  function  similar to the _strcat function
 * @dest: first string
 * @src: second string
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int j;

	for (j = 0; j < n && *src != '\0'; j++)
	{
		dest[len + j] = *src;
		src++;
	}
	dest[len + j] = '\0';
	return (dest);
}
