#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - new node at the end of list
  * @head: first node
  * @n: data for last node
  *
  * Return: Data of last node or null
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list, *current;

	if (head)
	{
		list = malloc(sizeof(listint_t));
		if (list == NULL)
			return (NULL);

		list->n = n;
		list->next = NULL;

		if (*head == NULL)
		{
			*head = list;
			return (*head);
		}
		else
		{
			current = *head;
			while (current->next)
				current = current->next;

			current->next = list;
			return (current);
		}
	}

	return (NULL);
}
