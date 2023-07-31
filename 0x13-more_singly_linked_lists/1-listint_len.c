#include <stdio.h>
#include "lists.h"

/**
  * listint_len - Returns the nodes
  * @h: first node
  *
  * Return: Number of nodes
  */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			i++;
		}
	}

	return (i);
}
