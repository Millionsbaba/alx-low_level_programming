#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: 'A new source code to print if statememts'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is neutral\n", n);
	}

	return (0);
}
