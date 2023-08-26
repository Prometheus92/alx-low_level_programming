#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list
 * @str: content of the node
 * @head: pointer to the head
 *
 * Return: the address of the new element, of NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	tmp = *head;
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (*head);
}
