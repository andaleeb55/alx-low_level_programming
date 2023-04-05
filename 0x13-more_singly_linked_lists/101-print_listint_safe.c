#include "lists.h"

/**
 * print_listint_safe - prints a linked list once (loop safe)
 * @head: pointer to the first node in the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	long int sub;

	while (head)
	{
		sub = head - head->next;
		counter++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (sub > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (counter);
}
