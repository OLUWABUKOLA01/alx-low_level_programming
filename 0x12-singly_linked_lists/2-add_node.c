#include "lists.h"
#include <string.h>

/**
 * *add_node - add a new node at the beginning of a list_t list
 * @str: string
 * @head: head for list_t
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;
	char *len = 0;

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
	new->next = *head;

	*head = new;

	return (new);
}
