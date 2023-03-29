#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the listint list
 * @idx: is the index of the list where the new node should be added
 * @n: is the data
 * Return: Null if it failed or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *actualNodo = *head;
	unsigned int i = 0;

	if (!new)
		return (free(new), NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (; i < idx - 1; i++)
	{
		actualNodo = actualNodo->next;
		if (actualNodo == NULL && idx - i > 0)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = actualNodo->next;
	actualNodo->next = new;

	return (new);
}
