#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of list
 * @h: Pointer to head of list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

