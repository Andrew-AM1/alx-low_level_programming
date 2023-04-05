#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: points to head of list.
 * @n: n element.
 *
 * Return: address of the new node/element and  NUll if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_Node;

	new_Node = malloc(sizeof(listint_t));

	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = *head;
	*head = new_Node;

	return (*head);
}
