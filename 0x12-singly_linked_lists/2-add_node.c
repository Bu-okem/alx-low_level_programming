#include "lists.h"
#include <string.h>

/**
 * add_node - Entry point
 * Descripiton - function that adds a new node at
 * the beginning of a list_t list
 * @str: pointer to string
 * Return: pointer to new head of list, on failure, NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
