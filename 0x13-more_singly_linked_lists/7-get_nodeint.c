#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list
 * @head: pointer to first node
 * @index: the index of the node
 * starting at 0
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int m;

	for (node = head, m = 0; node && m < index; node = node->next, m++)
		;
	return (node);
}
