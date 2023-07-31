#include <stdio.h>
#include "lists.h"

/**
 * list_len - size of nodes
 * @h: first node
 *
 * Return: size of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
