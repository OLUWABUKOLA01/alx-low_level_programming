#include "variadic_functions.h"

/**
 * print_char - Prints a char
 * @args: Argument pointer
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_integer - Prints an integer
 * @args: Argument pointer
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - Prints a float
 * @args: Argument pointer
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - Prints a string
 * @args: Argument pointer
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
		printf("%s", str);
}


/**
 * print_all - Prints anything
 * @format: Types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	print_type types[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list args;
	char *separator = "";
	int a = 0;
	int b = 0;

	va_start(args, format);
	while (format && format[a])
	{
		while (types[b].type)
		{
			if (*types[b].type == format[a])
			{
				printf("%s", separator);
				types[b].f(args);
				separator = ", ";
			}
			++b;
		}
		b = 0;
		++a;
	}
	printf("\n");
	va_end(args);
}
