#include "main.h"

/**
 * _strpbrk - Locates the firts occurence in the string @s
 * @s: String to be searched
 * @accept: Contains bytes that is searched for
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}
