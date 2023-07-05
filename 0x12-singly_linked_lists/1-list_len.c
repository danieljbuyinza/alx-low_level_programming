#include "lists.h"

/**
 * list_len - Returns number of elements in a list_t list
 * @h: Pointer to head of the list
 * Return: Number of elements in list
 */
size_t list_len(const list_t *h)
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

