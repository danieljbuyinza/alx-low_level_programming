#include "lists.h"

/**
 * reverse_listint - Reverses linked list
 * @head: Double pointer to head of linked list
 * Return: Pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;
	listint_t *next;

	prev = NULL;
	current = *head;
	next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}

