#include <stdio.h>

/**
 * main - Entry Point
 * Description: Print all possible different combinations of two digits
 * Return: 0
*/
int main(void)
{
int s;
int t;
for (s = 0; t <= 9; s++)
{
	putchar((s % 10) + '0');
	for (t = s + 1; t <= 9; t++)
	putchar((t % 10) + '0');
		continue;
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
