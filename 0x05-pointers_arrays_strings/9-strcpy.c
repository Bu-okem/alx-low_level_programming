/**
 * _strcpy - Entry point
 *  Description - function that copies the string pointed to by src,
 *  including the terminating null byte (\0), to the buffer pointed to by dest
 *  @dest: pointer to destination of string
 *  @src: pointer to source string to copy
 *  Return: pointer to dest;
 */

char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src)
		*dest++ = *src++;
	return (a);
}
