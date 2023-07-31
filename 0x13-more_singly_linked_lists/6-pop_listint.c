#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - delete first node
  * @head: first node
  *
  * Return: data of deleted node
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
