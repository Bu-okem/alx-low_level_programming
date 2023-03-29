#include "lists.h"
/**
 * add_dnodeint - function that adds a node to the head of the list
 * @head: double pointer to the head
 * @n: data to add into new node
 * Return: pointer to new element, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addrs_new_node;

	if (head == NULL)
		return (NULL);
	addrs_new_node = malloc(sizeof(dlistint_t));
	if (addrs_new_node == NULL)
		return (NULL);
	addrs_new_node->n = n;
	if (*head != NULL)
	{
		addrs_new_node->prev = NULL;
		addrs_new_node->next = (*head);
		(*head)->prev = addrs_new_node;
		*head = addrs_new_node;
		return (addrs_new_node);
	}
	addrs_new_node->next = NULL;
	addrs_new_node->prev = NULL;
	*head = addrs_new_node;
	return (addrs_new_node);

}
