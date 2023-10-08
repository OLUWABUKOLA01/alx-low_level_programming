#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: Value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int y = 0;
	unsigned int z = 0;
	unsigned int i;
	unsigned int total;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[y] != '\0')
		y++;

	while (s2[z] != '\0')
		z++;

	if (n >= z)
		n = z;
	total = y + n;

	result = malloc(sizeof(char) * (total + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < y; i++)
		result[i] = s1[i];

	for (i = 0; i < n; i++)
		result[y + i] = s2[i];

	result[total] = '\0';

	return (result);
}
