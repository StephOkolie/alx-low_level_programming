#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this duplicates a string
 * @str: this is the string to be duplicated
 *
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
