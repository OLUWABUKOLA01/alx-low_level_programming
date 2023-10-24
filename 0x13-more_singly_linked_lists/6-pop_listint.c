#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to list
 * Return: Head node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (*head == NULL)
		return (0);
	node = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(node);

	return (i);
}
