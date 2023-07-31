#include "lists.h"
#include <stdlib.h>

/**
 * listint_loop - loop in list
 * @head: first node
 *
 * Return: pointer or null
 */
listint_t *listint_loop(listint_t *head)
{
	listint_t *node, *last;

	if (head == NULL)
		return (NULL);

	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);
		for (node = head; node != last; node = node->next)
		{
			if (node == last->next)
				return (last->next);
		}
	}
	return (NULL);
}

/**
 * free_listint_safe - frees list
 * @h: first node
 *
 * Return: number of freed nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	size_t ssize;
	int i = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loopnode = listint_loop(*h);
	for (ssize = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
	{
		ssize++;
		next = (*h)->next;
		if (*h == loopnode && i)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			ssize++;
			next = next->next;
			free((*h)->next);
			i = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (ssize);
}
