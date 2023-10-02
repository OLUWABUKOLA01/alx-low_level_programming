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
	int i, sum = 0, result = 0;

	char c[] = "Error", *function_call;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			function_call = argv[i];
			while (*function_call != 0)
			{
				if (*function_call < 47 || *function_call > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				function_call++;
			}
			result = atoi(argv[i]);
			sum = sum + result;
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
