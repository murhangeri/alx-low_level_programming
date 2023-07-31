#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - insert node
  * @head: first node
  * @idx: Index
  * @n: Position
  *
  * Return: Pointer
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *index;
	unsigned int i = 1;

	if (head)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);

		node->n = n;
		if (idx > 0)
		{
			index = *head;
			while (index)
			{
				if (i == idx)
				{
					node->next = index->next;
					index->next = node;
					return (node);
				}
				index = index->next;
				i++;
			}
			if (idx > i)
				return (NULL);
		}
		else
		{
			node->next = *head;
			*head = node;
		}
		return (node);
	}
	return (NULL);
}
