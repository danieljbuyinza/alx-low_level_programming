#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts new node at given position in list
 * @head: Double pointer to the head of the linked list
 * @idx: Index for new node starting from 0
 * @n: Value of data for new node
 * Return: Address of new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	while (idx > 1 && temp != NULL)
	{
		temp = temp->next;
		idx--;
	}

	if (temp == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

