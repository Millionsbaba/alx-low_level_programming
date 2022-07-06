#include "main.h"

/**
 * print_alphabet_x10 - A source code to print alphabets 10x
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int j;
	int i;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
