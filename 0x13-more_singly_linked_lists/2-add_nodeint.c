#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Adds a new node
  * @head: The first node of linked list
  * @n: Data of linked list node
  *
  * Return: Addressof list or Null
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	if (head != NULL)
	{
		list = malloc(sizeof(listint_t));
		if (list == NULL)
			return (NULL);

		list->n = n;
		list->next = *head;
		*head = list;

		return (list);
	}

	return (NULL);
}
