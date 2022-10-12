#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Entry point
 * Description - function that prints a name
 * @name: pointer to name to be printed
 * @f: function to print name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
