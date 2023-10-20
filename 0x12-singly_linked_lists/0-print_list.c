#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: Definition for linked list
 *
 * Return: Linked list
 */

size_t print_list(const list_t *h)
{
	unsigned int node = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;

		node++;
	}
	return (node);
}
