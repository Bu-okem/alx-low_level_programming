#include "main.h"
int check_seperators(char a);

/**
 * cap_string - Entry point
 * Description - function that capitalizes all words of a string
 * @s: string input
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (a == 0 && (s[a] >= 'a' && s[a] <= 'z'))
			s[a] -= 32;

		if (check_seperators(s[a]) && (s[a + 1] >= 'a' && s[a + 1] <= 'z'))
			s[a + 1] -= 32;

		a++;
	}

	return (s);
}

/**
 * check_seperators - Entry point
 * Description - function that checks for word seperators
 * @a: input
 * Return: 1 if seperator, 0 otherwise
 */

int check_seperators(char a)
{
	int i = 0;
	char seperators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};

	for (; i < 13; i++)
	{
		if (a == seperators[i])
			return (1);
	}

	return (0);
}
