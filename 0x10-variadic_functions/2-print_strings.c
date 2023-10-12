#include "variadic_functions.h"

/**
 * print_strings -  function that print string
 * @separator: use to separate
 * @n: Integer
 * Return: Success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int j = 0;
	char *value;

	va_start(valist, n);

	for (j = 0; j < n; j++)
	{
		value = va_arg(valist, char *);

		if (value == NULL)
			printf("%s", "(nil)");

		else
			printf("%s", value);

		if (separator != NULL && j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
