#include "lists.h"
#include <string.h>

/**
 * add_node_end - Entry point
 * Description - function that adds a new node at
 * the end of a list_t list
 * @head: pointer to a list_t pointer that points to the head struct
 * @string: string
 * Return: address of the new element, or if failed, NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[length])
		length++;
	
	new_node->len = length;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
