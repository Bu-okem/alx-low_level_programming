#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[8] = "_putchar";
	int n;

	for (n = 0; n < 8; n++)
		_putchar(word[n]);
	_putchar('\n');

	return (0);
}
