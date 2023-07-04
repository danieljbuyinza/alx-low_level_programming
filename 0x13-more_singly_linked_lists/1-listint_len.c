#include "lists.h"

/**
 * listint_len - Returns number of elements in linked list
 * @h: Given list
 * Return: Number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t no_of_elements;

	no_of_elements = 0;

	while (h)
	{
		no_of_elements++;
		h = h ->next;
	}

	return (no_of_elements);
}

