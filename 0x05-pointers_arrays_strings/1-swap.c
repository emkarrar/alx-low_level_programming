#include "main.h"
/**
 * swap_int - swaps 2 integers
 * @a: &a
 * @b: &b
 */
void swap_int(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}
