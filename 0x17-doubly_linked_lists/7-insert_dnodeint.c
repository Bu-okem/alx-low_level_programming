#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a node at
 * position in a list.
 * @h: double pointer to the head.
 * @idx: index to insert new node at.
 * @n: data to add to new node.
 * Return: pointer to new element, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *aux_h;

	/* case asked idx is 0 or h is null at the beggining, recursion */
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	/* traverse the list */
	aux_h = *h;
	while (idx > 1)
	{
		aux_h = aux_h->next;
		if (aux_h == NULL)
			return (NULL);
		idx--;
	}
	/* case at the end, recursion */
	if (aux_h->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	/* idx found then add new_node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = aux_h;
	new_node->next = aux_h->next;
	aux_h->next->prev = new_node;
	aux_h->next = new_node;
	return (new_node);
}
