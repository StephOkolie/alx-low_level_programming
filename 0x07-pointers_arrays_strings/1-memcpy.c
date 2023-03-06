#include "main.h"

/**
 * _memcpy - Copies @n bytes from memory area @src to memory area @dest
 * @src: pointer to string to copy character from
 * @dest: pointer of string to copy character to
 * @n: number of bytes memory to copy from @src
 * Return: @dest
 */

char *_memcpy(char *src, char *dest, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
