#include <stdio.h>
/**
 * main - Entry point
 * @argc: Count the number of arguments
 * @argv: Pointer of array
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
