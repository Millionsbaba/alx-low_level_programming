#include <stdio.h>
#include <stdlib.h>

/**
 * main - Code that prints 0 to 10 with space and comma
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(48 + i);

		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
