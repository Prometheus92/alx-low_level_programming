#include "lists.h"
/**
 * free_list - frees a list
 * @head: head pointer
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	for (tmp = head; tmp != NULL; tmp = head)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
