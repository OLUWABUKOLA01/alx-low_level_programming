#include "lists.h"
/**
 *  print_listint - prints all the elements of a listint_t list
 * @h: pointer to a list
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	for (nodes = 0; h; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
