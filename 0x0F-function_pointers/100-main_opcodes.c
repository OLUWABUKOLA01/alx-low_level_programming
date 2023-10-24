#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: arguments
 * @argv: vector
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int a, bytes;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n"), exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n"), exit(2);
	}

	for (a = 0; a < bytes; a++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (a == bytes - 1)
			continue;
		printf(" ");
		address++;
	}

	printf("\n");
	return (0);
}
