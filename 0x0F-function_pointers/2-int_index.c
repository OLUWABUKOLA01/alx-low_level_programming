#include "function_pointers.h"
/**
 * int_index -  function that searches for an integer
 * @array: array function
 * @size: size of array
 * @cmp: function to compare
 * Return: Success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp && size != 0)
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);


				return (-1);
}
