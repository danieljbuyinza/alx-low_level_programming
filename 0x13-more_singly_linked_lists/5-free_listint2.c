#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: Double pointer to head of linked list
*/
void free_listint2(listint **head)
{
	listint_t *current;
	listint_t *next;

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}

