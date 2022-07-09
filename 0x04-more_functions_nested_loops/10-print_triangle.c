#include "main.h"

/**
 * print_triangle - To print a triangle
 * @size: To determine the parameter
 *
 * Return: Based on conditions
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size < 1)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			for  (j = size - i - 1; j > 0; j--)
			{
				_putchar(32);

				for (k = i + 1; k > 0; k--)
				{
					_putchar(35);
				}

				_putchar('\n');
			}
		}
	}
}
