#include "lists.h"

/**
 * sum_listint - Entry point
 * Description - function that returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: pointer listint_t structure
 * Return: sum of data of list, 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
