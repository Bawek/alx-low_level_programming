#include "main.h"

/**
 * swap_int -Swaps  the values of 2 integers.
 * @a:first argument a
 * @b:second argument b
 *
 * Return:void.
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;

}

