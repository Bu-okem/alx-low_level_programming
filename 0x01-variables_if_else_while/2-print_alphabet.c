#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowAlpha;

	for (lowAlpha = 'a'; lowAlpha <= 'z'; ++lowAlpha)
		putchar(lowAlpha);
	putchar('\n');
	
	return (0);
}
