#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - reverse list
  * @head:first node
  *
  * Return: pointer to reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = previous;
			previous = next;
		}

		*head = previous;
		return (*head);
	}

	return (NULL);
}
