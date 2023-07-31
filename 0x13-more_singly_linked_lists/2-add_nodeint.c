#include "list.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head:pointer to the first node in the list
 *
 * @n: data to insert in tht new node
 * return: pointer to the new node, or null if it fial
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (null);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
