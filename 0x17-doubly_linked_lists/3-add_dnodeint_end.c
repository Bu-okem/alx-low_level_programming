#include "lists.h"

/**
 * add_dnodeint_end - function that adds a node to the end of list.
 * @head: double pointer to the head.
 * @n: data to add to new node.
 * Return: pointer to new element, NULL on failure.
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	if ((*head)->next == NULL)
	{
	(*head)->next = new;
	new->prev = *head;
	return (new);
	}
	tmp = *head;
	while (tmp->next)
	tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
