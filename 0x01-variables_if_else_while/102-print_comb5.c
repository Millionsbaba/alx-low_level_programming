#include <stdio.h>
#include <stdlib.h>

/**
 * main - A source code to print a random decimal of 4 digits
 *
 * Return: Always 0 (success)
 */
int main (void)
{
	int c;
	int f_d;
	int l_d;

	int c2;
	int f_d2;
	int l_d2;

	for (c =0; c <= 98; c++)
	{
		f_d = (c / 10 + '0');
		l_d = (c % 10 + '0');

		for (c2 = 0; c2 <=99; c2++)
		{
			f_d2 = (c2 / 10 + '0');
			l_d2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(f_d);
				putchar(l_d);
				putchar(32);
				putchar(f_d2);
				putchar(l_d2);

				if (c != 98)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
