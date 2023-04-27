#include "lists.h"

/**
 * list_len - determines length 
 * of linked list given
 * @h: pointer to first node
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
