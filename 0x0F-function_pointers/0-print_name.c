#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
