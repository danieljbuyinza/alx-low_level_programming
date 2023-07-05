#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees listint_t linked list
 * @h: Double pointer to head of linked list
 * Return: Size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *next;
	size_t count;

	current = *h;
	count = 0;

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		current = next;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (count);
}

