#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Prints linked list
  * @h: First node
  *
  * Return: The number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}

	return (i);
}
