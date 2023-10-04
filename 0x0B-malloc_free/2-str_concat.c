#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Value
 */
char *str_concat(char *s1, char *s2)
{
	char *v;
	int w, x, y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (w = 0; s1[w] != '\0'; w++)
	;
	for (x = 0; s2[x] != '\0'; x++)
	;
	v = malloc((w * sizeof(*s1)) + (x * sizeof(*s2)) + 1);
	if (v == NULL)
		return (NULL);

	for (y = 0, z = 0; y < (w + x + 1); y++)
	{
		if (y < w)
			v[y] = s1[y];
		else
			v[y] = s2[z++];
	}
	return (v);

}
