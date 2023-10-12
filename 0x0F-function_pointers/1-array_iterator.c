#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array function
 * @size: size of array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;


	if (array == NULL || action == NULL)
		return;
	for (y = 0; y < size; y++)
		action(array[y]);
}
