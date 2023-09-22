#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - Returns the nth node
  * @head: First node
  * @index: n
  *
  * Return: Nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		while (head)
		{
			if (i == index)
				return (head);

			head = head->next;
			i++;
		}
	}

	return (NULL);
}
