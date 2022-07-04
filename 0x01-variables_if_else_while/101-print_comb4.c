#include <stdio.h>
#include <stdlib.h>

/**
 * main - A set of code to print 3 digits as one
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;
	int d;
	int e;

	for (e = 0; e < 10; e++)
	{
		for (d = 0; d < 10; d++)
		{
			for (c = 0; c < 10; c++)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
				        putchar('0' + d);
					putchar('0' + c);
					
					if (c + d + e != 9 + 8 + 7)
					{
						putchar(44);
						putchar(32);
					}
				}

			}
		}
	}

	putchar('\n');
	return (0);
}
