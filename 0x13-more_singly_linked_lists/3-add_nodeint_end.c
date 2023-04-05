#include "lists.h"
/**
 * add_nodeint_end - add new node at the end of the list
 * @head: head pointer of the list
 * @n: new value to be added
 * Return: pointer to the head of the lis
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(*head));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
