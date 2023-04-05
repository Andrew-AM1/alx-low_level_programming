#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;

	tmp = *head;

	while (tmp != NULL)
	{
		listint_t *temp = tmp->next;

		free(tmp);
		tmp = temp;
	}

	*head = NULL;
}
