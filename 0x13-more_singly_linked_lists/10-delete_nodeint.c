#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at given index in list
 * @head: Double pointer to the head of the linked list
 * @index: Index of node to delete starting from 0
 * Return: 1 if deletion succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *prev;
	unsigned int count;

	current = *head;
	prev = NULL;
	count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}

		prev = current;
		current = current->next;
		count++;
	}

	return (-1);
}

