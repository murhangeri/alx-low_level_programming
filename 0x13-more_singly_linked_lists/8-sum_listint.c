#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - sum of data
  * @head:First node
  *
  * Return: sum of data
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
