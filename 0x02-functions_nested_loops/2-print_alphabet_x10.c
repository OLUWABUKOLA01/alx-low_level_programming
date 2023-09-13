#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
	char i = 'a';
	int j = 1;

	while (j <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)

		_putchar(i);
		j++;
		_putchar('\n');

	}
}
