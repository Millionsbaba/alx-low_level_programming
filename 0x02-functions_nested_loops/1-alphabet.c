#include "main.h"

/**
 * main - A source code to print alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');}
