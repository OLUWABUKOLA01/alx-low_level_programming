#include <stdio.h>
/**
 * main - print fibonacci
 * Return: 0 (Success)
 *
 */
int main(void)
{
	unsigned int j, k, l, m, n;


	j = 1;
	k = 2;
	l = 3;
	n = 2;

	for (m = 2, m <= 32; m++)
	{
		if (l % 2 == 0)
		n = n + l;
		j = k;
		k = l;
		l = j + k;
	}
	printf("%u\n", n);
	return (0);
}
