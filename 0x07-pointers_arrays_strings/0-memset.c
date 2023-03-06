#include "main.h"

/**
 * *_memset - fill a block of memory with a specific value
 * @s: A pointer to the memory area to be filled
 * @b: The desired value
 * @n: Number of bytes to be changed
 * Return: String @s, pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
