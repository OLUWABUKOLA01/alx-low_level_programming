#include <stdio.h>

/**
 * main - Entry Point
 * Description: Print all possible combinations of two digits
 * Return: 0
*/
int main(void)
{
	int s;
	int t;

	for (s = 0; t <= 9; s++)
	{
		for (t = s + 1; t <= 9; t++)
		{
			putchar((s % 10) + '0');
			putchar((t % 10) + '0');

			if (s == 8 && t == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
