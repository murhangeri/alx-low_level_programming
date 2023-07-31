#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - delete note
  * @head: First node
  * @index: index
  *
  * Return: int
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *node = *head, *current;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	current = *head;
	while (current)
	{
		if (i == index)
		{
			node = current->next;
			current->next = node->next;
			free(node);
			return (1);
		}

		current = current->next;
		i++;
	}

	return (-1);
}
