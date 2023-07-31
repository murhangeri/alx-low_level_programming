#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Add node
 * @head: First node
 * @str: string pointer
 *
 * Return: address of new element
 */

char *allocatespace(const char *str);
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = allocatespace(str);
	while (str[count] != '\0')
		i++;
	node->len = i;
	node->next = *head;
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
