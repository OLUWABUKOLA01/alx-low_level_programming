#include <stdio.h>
/**
 * main - Entry point
 * @argc: Counts the number of argument
 * @argv: Pointer of array
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int n;

	if (argc > 0)
	{
		for (n = 0; n < argc; n++)
		{
			printf("%s\n", argv[n]);
		}
	}
	return (0);
}
