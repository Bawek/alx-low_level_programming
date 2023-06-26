#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int l = 0;

	for (; l < n; l++)
	{
		printf("%d", *(a + l));
		if (l != (n - 1))
			printf(", ");
	}
	printf("\n");
}

