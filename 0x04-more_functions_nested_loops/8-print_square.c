#include "main.h"

/**
 * print_square - To print squares
 * @size: To get a size
 *
 * return: Based on conditional statement
 */
void print_square(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > 0; j--)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
