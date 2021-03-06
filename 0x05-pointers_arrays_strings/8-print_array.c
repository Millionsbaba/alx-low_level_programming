#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: Array of integers
 * @n: Argument for no of array
 *
 * Return: Void.
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}

		printf("%d", a[n - 1]);
	}

	putchar('\n');
}
