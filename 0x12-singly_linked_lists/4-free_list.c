#include "lists.h"

/**
 * free_list - Entry point
 * Description - function that frees a list_t list
 * @head: pointer to head of list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
