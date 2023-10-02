#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Count the number of argument
 * @argv: Pointer of array
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
