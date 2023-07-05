#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints linked list
 * @head: Pointer to head of the linked list
 * Return: Number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow;
	const listint_t *fast;
	size_t count;

	slow = head;
	fast = head;
	count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}

	return (count);
}

