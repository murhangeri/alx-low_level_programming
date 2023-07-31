#include <stdlib.h>
#include "lists.h"

/**
  * free_listint -Release space from heap
  * @head: First node of list
  *
  * Return: Nothing
  */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}

	free(head);
}
