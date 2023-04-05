#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a linked list from the memory (with loop safe)
 * @h: a pointer to the first node in the linked list
 *
 * Return: number of nodes in the list list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int sub;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		listint_t *tmp;

		sub = *h - (*h)->next;
		if (sub > 0)
		{
			tmp = (*h)->next;
			*h = tmp;
			size++;
		}
		else
		{
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}
