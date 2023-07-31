#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node of a listint_t linked list.
 * @head: Apointer to the head of the listint_t list.
 * @index: the index of the node to locate - indices start at 0.
 *
 * return: if the node does not exsit - null.
 * otherwise - the located mode.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == null)
			return (null);
		head = head->next
	}

	return (head);
}


