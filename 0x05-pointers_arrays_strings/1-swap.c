#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: intger to swap
 * @b: other integer to swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
