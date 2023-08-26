#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of the list
 * @head: pointer to the head pointer
 * @str: the content of the node
 *
 * Return: the address of th new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
