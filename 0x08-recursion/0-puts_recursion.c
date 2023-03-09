#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @x: string to print
 */

void _puts_recursion(char *x)
{
	if (*x)
	{
		_putchar(*x);
		_puts_recursion(x + 1);
	}

	else
		_putchar('\n');
}
