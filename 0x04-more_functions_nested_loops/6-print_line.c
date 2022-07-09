#include "main.h"

/**
 * print_line - To print a line
 * @n: A parameter for change
 *
 * Return: Based on conditional statement
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
