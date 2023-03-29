#include "lists.h"

/**
 * free_listint_safe - function that frees a list
 * @h: pointer listint_t structure
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t i = 0;

	temp = *h;
	if (h == NULL)
		return (i);
	while (temp)
	{
		if (temp <= temp->next)
		{
			free(temp);
			i++;
			break;
		}

		*h = temp->next;
		free(temp);
		temp = *h;
		i++;
	}
	*h = NULL;
	return (i);
}
