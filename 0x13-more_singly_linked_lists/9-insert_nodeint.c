#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position
 * @head: address of pointer to first node
 * @idx:  the index of the list where
 * the new node should be added
 * index starts at 0
 * @n: n value of new node
 * Return: the address of the new node
 * or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node = malloc(sizeof(listint_t));
	unsigned int j = 0;

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	while (node)
	{
		if (j == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		j++;
		node = node->next;
	}
	free(new_node);
	return (NULL);
}
