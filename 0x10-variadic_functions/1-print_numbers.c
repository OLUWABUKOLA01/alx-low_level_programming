#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: use to separate
 * @n: integer
 * Return: Success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int j = 0;

	va_start(valist, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(valist, int));

		if (separator != NULL && j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
