#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - Singly linked list
 * @n: Integer
 * @next: Points to next node
*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
}
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
