#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Entry point
 * Description - function that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array containing arguments
 * Return: pointer to string containing all arguments, otherwise NULL
 */

char *argstostr(int ac, char **av)
{
	char *new_str;
	int len = 0, a = 0, b, c = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
		len++;
	}

	len++;
	new_str = malloc(len * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			new_str[c] = av[a][b];
			c++;
		}
		new_str[c] = '\n';
		c++;
	}
	new_str[c] = '\0';
	return (new_str);
}
