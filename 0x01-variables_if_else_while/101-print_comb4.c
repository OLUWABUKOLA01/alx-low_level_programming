#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print all possible combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int s;
	int t;
	int u;

	for (s = 0; s < 10; s++)
	{
		for (t = s + 1; t  <= 9; t++)
		{
			for (u = t + 1; u <= 9; u++)
			{
				putchar((s % 10) + '0');
				putchar((t % 10) + '0');
				putchar((u % 10) + '0');

				if (s == 7 && t == 8 && u == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
