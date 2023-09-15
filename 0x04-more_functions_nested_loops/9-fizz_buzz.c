#include "main.h"
#include <stdio.h>

/**
 * main - print the numbers from 1 to 100 of programming job candidate
 * but for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i  % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
