#include "lists.h"

/**
 * print_listint - prints all the elements of _listint list.
 * @h: head of the list.
 *
 * Return: numbers of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t numNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numNodes++;
	}

	return (numNodes);
}
