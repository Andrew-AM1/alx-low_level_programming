#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: points to head of a list.
 * @n: n element(int param).
 * Return: the address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_Node;
	listint_t *temp;

	(void)temp;

	new_Node = malloc(sizeof(listint_t));

	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new_Node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_Node;
	}

	return (*head);
}
