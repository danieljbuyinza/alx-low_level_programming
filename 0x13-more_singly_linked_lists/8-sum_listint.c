#include "lists.h"

/**
 * sum_listint - Returns sum of all data of listint_t linked list
 * @head: Pointer to the head of the linked list
 * Return: Sum of all data, or 0 if list is empty
*/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	sum = 0;
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

