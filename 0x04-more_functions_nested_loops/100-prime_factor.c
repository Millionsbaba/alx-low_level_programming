#include "main.h"
#include <stdio.h>

/**
 * main - This shows prime numbers of prime factors
 *
 * Return: Always 0.
 */
int main(void)
{
	long int target;
	int i;

	target = 612852475143;
	while (target > 1)
	{
		for (i = 2; i <= target / 2; i++)
		{
			if (target % i == 0)
			{
				target /= i;
				break;
			}

			else
			{
				if (i == target / 2)
				{
					printf("%ld\n", target);
					return (0);
				}

				continue;
			}
		}
	}

	return (0);
}
