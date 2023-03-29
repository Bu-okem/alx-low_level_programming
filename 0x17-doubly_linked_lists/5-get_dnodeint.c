#include "lists.h"
/**
 * get_dnodeint_at_index - function that gets a node at index
 * @head: pointer to head of list to look through
 * @index: index of node to find
 * Return: pointer to node if found, or NULL in otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_index;
	unsigned int idx_runner;

	if (head == NULL)
		return (NULL);

	current_index = head;
	/* copy list's content to current_index */
	head->n = current_index->n;
	idx_runner = 0;

	while (current_index != NULL)
	{
		/* when we get the given index (5) return its value */
		/* otherwise keeps running through the list */
		if (idx_runner == index)
			return (current_index);
		idx_runner++;
		current_index = current_index->next;
	}
	/* if node at given index doesn't exist */
	return (NULL);
}
