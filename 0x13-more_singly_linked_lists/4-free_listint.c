#include "lists.h"
/**
 * free_listint - frees memory allocated for linked list
 * @head: head pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
