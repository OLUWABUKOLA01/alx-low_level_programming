#include "main.h"
/**
 * *_strcpy - copy the string pointed to src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer
 * @src: string
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = '\0';
	}
	dest[i] = src[i];
	return (dest);
}
