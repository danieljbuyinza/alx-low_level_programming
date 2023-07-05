#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node starting from 0.
 * Return: Pointer to the nth node, or NULL if the node does not exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;

	count = 0;
	current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		count++;
		current = current->next;
	}

	return (NULL);
}

