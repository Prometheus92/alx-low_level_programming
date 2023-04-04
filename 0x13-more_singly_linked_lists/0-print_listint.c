#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints all the elements of the listint_t list
 * @h: head of the linked list
 * Return: unsigned int (size_t) as the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes;

	num_nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
