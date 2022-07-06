#include "main.h"

/**
 * main - A source code to print alphabet
 *
 * Return: Always 0 (success)
 */

/*
 * Description: A new function to print_alphabet
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
