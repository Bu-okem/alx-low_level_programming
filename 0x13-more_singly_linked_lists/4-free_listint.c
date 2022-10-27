#include "lists.h"

/**
 * free_listint - Entyr point
 * Description - function that frees a listint_t list
 * @head: pointer to listint_t structure
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
