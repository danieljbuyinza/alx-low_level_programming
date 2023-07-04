#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns number of elements in linked list
 * @h: Given list
 * Return: Number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t no_of_elements;
	const listint_t *curent;

	no_of_elements = 0;
	*current = h;

	while (current != NULL)
	{
		no_of_elements++;
		current = current->next;
	}

	return (no_of_elements);
}

