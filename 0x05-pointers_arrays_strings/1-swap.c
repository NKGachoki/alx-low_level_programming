#include "main.h"

/**
 * swap_int - swaps values of 2 integers
 * @a: Pointer to 1st value
 * @b: Pointer to 2nd value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
