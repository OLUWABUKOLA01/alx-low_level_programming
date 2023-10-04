#include "main.h"

/**
 *  _islower -  checks for lowercase character
 *
 * @c: character to test
 *
 * Return: 1 or 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
