#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: this iss the first entry
 * @b: this is the second entry
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
