#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print various combinations of base 10 numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;
	int d;

	for (d = 0; d < 10; d++)
	{
		for (c = 0; c < 10; c++)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(46);
					putchar(44);
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
