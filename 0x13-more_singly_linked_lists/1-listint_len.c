#include "lists.h"
/**
 * listint_len - returns the number of element in the list
 * @h: head of the pointer
 * Return: number of nodes or elements(SIZE_T)
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes;

	num_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
