#include <stdio.h>
#include <stdlib.h>

/**
 * main - This code print decimals in base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}

	putchar('\n');
	return (0);
}
