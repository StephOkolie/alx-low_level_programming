#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * A function that creates an array of characters
 * and initializes it with a specific character
 * create_array - creates an array of characters
 * @c: The char to fill in the array
 *
 * Return: The array filled
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return(NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
