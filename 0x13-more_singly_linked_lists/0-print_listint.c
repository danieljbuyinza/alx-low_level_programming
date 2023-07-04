#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of listint_t list
 * @h: Given list
 * Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t no_of_nodes;

	no_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_of_nodes++;
	}

	return (no_of_nodes);
}

