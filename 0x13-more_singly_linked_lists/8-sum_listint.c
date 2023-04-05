#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a listint_t linked list.
 * @head: points to head of list.
 * Return: sum of all data (n), if empty, 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
