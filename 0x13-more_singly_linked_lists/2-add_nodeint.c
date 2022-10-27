#include "lists.h"
#include <string.h>

/**
 * add_nodeint - Entry point
 * Description - function that adds a new nod at the begining of a list
 * @head: pointer to list_t structure
 * @n: integer data to put into new node
 * Return: the address of the new element, or NULL if it failed
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
