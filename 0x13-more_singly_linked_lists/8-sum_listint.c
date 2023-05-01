#include "lists.h"

/**
 * sum_listint - a function that returns the sum
 * of all the data (n)
 * of a listint_t linked list
 * @head: pointer to first node
 * Return: som but if the list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int som = 0;

	while (head)
	{
		som += head->n;
		head = head->next;
	}
	return (som);
}
