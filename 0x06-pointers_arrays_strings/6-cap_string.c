#include "main.h"
/**
 * *cap_string - capitalize all words of a string
 * @s: char to test
 * Return: Success
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char b[] = "' ',;.!?(){}\n\t\" ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
			s[i] = s[i] - 32;
			continue;
			}
		}
		if (s[i] == b[j])
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		}
	}
	return (s);
}
