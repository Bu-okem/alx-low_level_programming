#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * Description - function that returns the nth node of a listint_t linked list
 * @head: pointer to listint_t structure
 * @index: index of the node
 * Return: pointer to node at specified index, or NULL if not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
