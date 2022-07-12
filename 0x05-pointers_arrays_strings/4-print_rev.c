#include "main.h"

/**
 * print_rev - To print string in reverse
 * @s: Pointer to s
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != 0; i++)
	for (i = i - 1; i >= 0; i--)
	_putchar(s[i]);

	_putchar(10);
}
