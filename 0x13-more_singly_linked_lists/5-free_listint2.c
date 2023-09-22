#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - Release space
  * @head:First node
  *
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head)
	{
		while (*head)
		{
			current = (*head);
			*head = (*head)->next;
			free(current);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
