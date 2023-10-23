#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	for (nodes = 0; h; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
