#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * Description - function that concatenates two strings
 * @s1: input pointer of first string
 * @s2: input pointer of second string
 * Return: pointer to concatened string OR if string is NULL, NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str, *starts1, *starts2;
	int n = 0, lens1 = 0, lens2 = 0;

	starts1 = s1;
	starts2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		lens1++;
		s1++;
	}
	s1 = starts1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		lens2++;
		s2++;
	}
	s2 = starts2;
	new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	starts1 = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; n < (lens1 + lens2); n++)
	{
		if (n < lens1)
		{
			new_str[n] = *s1;
			s1++;
		}
		else
		{
			new_str[n] = *s2;
			s2++;
		}
	}
	new_str[n] = '\0';
	return (starts1);
}
