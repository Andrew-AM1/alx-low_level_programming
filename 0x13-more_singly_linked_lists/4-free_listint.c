#include "lists.h"

/**
 * free_listint - frees a linked(listint_t) list
 * @head: head of a list.
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *ai;

	while ((ai = head) != NULL)
	{
		head = head->next;
		free(ai);
	}
}
