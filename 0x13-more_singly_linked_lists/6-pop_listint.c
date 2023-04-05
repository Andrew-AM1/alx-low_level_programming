#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns...
 * @head: points to head of a list.
 *
 * Return: data of head node and 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	return (0);

	i = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (i);

}
