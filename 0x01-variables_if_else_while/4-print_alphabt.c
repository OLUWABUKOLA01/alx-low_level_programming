#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)

if (c != 'e' && c != 'q')

putchar(c);

putchar('\n');

return (0);
}
