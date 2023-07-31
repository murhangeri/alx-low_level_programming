#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_loop - loop in a list
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
 * print_listint_safe - prints number of nodes
 * @head: first node
 *
 * Return: nodes numbers
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ssize = 0;
	int i;
	listint_t *loopnode;

	loopnode = listint_loop((listint_t *) head);

	for (ssize = 0, i = 1; (head != loopnode || i) && head != NULL; ssize++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loopnode)
			i = 0;
		head = head->next;
	}

	if (loopnode != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (ssize);
}
