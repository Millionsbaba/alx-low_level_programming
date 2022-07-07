#include "main.h"

/**
 * print_sign - A code to print signs on return
 * @n: The description of n
 *
 * Return: Based on the conditions stipulated
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('0');
		return (-1);
	}
}
