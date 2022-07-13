#include "main.h"

/**
 * puts2 - Prints characters in a string
 * in steps of 2
 * @str: Array of characters
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}

	_putchar(10);
}
