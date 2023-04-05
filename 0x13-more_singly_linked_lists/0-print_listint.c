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

	do {
		printf("%d\n", h->n);
		numNodes++;
		h = h->next;
	} while (h != NULL);

	return (numNodes);
}
