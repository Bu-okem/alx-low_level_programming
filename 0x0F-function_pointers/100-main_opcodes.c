#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description - program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 or 2 on fail, otherwise  0
 */

int main(int argc, char *argv[])
{
	int bytes, n;
	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func_ptr = (unsigned char *)main;
	n = 0;
	if (bytes > 0)
	{
		while (n < (bytes - 1))
		{
			printf("%02hhx ", func_ptr[n++]);
			printf("%hhx\n", func_ptr[n]);
		}
		return (0);
	}
}
