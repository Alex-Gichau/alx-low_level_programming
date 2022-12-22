#include "main.h"

/**
 * reverse_array - function that reverse the contents of an array of integers
 * @a: array pointer
 * @n: numbers
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
