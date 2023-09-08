#include <stdio.h>

/**
 * main - Print the sizes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int g;
	long long int l;
	float f;

	printf("Size of char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of long int: %lu byte(s)\n", (unsigned long) sizeof(g));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long) sizeof(l));
	printf("Size of float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
