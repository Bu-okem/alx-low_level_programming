#include "lists.h"
/**
 * free_dlistint - function that frees a doubly linked list
 * @head: pointer to head of doubly linked list to free
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux_head;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		aux_head = head;
		head = head->next;
		free(aux_head);
	}
	free(head);
}
