#include <stdio.h>

/**
 * main - Entry point
 * Description: print all single digit of base 10
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	putchar((i % 10)  + '0');
	putchar('\n');
	return (0);
}
