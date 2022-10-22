#include <stdio.h>

void main_constructor(void) __attribute__((constructor));

/**
 * main_constructor - Entry point
 * Description - function that prints a message before main runs
 * Return: nothing
 */

void main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
