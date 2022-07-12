#include "main.h"

/**
 * swap_int - To swap integer a value with integer b value
 * @a: Integer a
 * @b: interger b
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
