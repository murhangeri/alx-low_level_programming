#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - new nodes
 * @head: first node
 * @str: pointer to a string
 *
 * @Return: address of new element
 */
char *allocatespace(const char *str);
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *node, *current;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	if (str)
	{
		node->str = allocatespace(str);
		while (str[i] != '\0')
			i++;
		node->len = i;
	}
	else
	{
		node->str = NULL;
		node->len = 0;
	}
	node->next = NULL;
	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}
	else
		*head = node;
	return (node);
}

/**
 * allocatespace - allocate space
 * @str: string argument
 *
 * Return: pointer
 */
char *allocatespace(const char *str)
{
	int i;
	int a;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	a = 0;
	while (str[a] != '\0')
	{
		ptr[a] = str[a];
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}
