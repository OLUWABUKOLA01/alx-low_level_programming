#include "lists.h"
#include <string.h>
/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: head of list_t
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;
	char *len;
	int i;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	len = strdup(str);

	if (len == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	new->str = len;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	return (*head);
}
