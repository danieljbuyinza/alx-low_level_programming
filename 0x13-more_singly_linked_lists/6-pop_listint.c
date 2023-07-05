#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Double pointer to the head of linked list.
 * Return: Data of deleted head node, or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

       	if (*head == NULL) {
		return 0;
	}
	
	temp = *head;
       	data = temp->n;
	*head = temp->next;

       	free(temp);
	
	return (data);
}

