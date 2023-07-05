#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to head of list
 * Return: Number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
		h = h->next;
		count++;
	}

	return (count);
}

