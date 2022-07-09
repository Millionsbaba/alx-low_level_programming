#include "main.h"

/**
 * print_diagonal - To print a diagonal
 * @n: The parameter
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = i; j > 0; j--)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
}
