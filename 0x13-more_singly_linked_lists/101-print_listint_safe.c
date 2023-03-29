#include "lists.h"

/**
 * print_listint_safe - function that reverses a linked list
 * @head: pointer to listint_t structure
 *
 * Return: pointer to the first node of the reverse list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *temp, *node;

	node = head;
	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		temp = node;
		node = node->next;
		i++;
		if (temp <= node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
	}
	return (i);
}

