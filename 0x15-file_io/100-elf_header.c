#include <stdio.h>

/**
 * main - Entry point
 * Description - program that displays the information contained in the
 * ELF header at the start of an ELF file
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 1 on success, error on failure
 */

int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
