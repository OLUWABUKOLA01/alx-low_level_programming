#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: pointer to list
 * @index: Index of node
 * Return: 1 for success, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *node, *step;

	step = *head;

	if (step == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(step);
		return (1);
	}

	for (count = 0; count < (index - 1); count++)
	{
		if (step->next == NULL)
			return (-1);

		step = step->next;
	}

	node = step->next;
	step->next = node->next;
	free(node);

	return (1);
}
