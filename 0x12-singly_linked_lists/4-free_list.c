#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of list_t
 * Return: free after checking
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free(head->str);
	free(head);
	free_list(head->next);
}
