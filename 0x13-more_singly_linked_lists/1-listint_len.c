#include "lists.h"

/**
 * listint_len - Returns number of elements in list
 * @h: Pointer to head of the list
 *
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

