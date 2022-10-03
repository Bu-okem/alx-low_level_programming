#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 * Description - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: pointer of the string to copy
 * Return: pointer to the new string OR if string is NULL, NULL
 */

char *_strdup(char *str)
{
	char *new_str, *start;
	int n = 0, len = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	new_str = malloc(sizeof(char) * (len + 1));
	start = new_str;

	if (new_str != NULL)
	{
		for (; n < len; n++)
		{
			new_str[n] = *str;
			str++;
		}
		new_str[n] = '\0';
		return (start);
	}
	else
		return (NULL);
}
