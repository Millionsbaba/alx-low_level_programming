#include "main.h"

/**
 * _puts - To print the string
 * @str: To refer to the string
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
	_putchar(str[i]);
	}

	_putchar('\n');
}
