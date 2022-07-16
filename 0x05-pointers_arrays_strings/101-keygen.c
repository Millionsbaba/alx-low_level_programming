#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int random, iteration, max;

	srand(time(NULL));
	for (iteration = 0, max = 2772; max > 122; iteration++)
	{
		random = (rand() % 125) + 1;
		printf("%c", random);
		max -= random;
	}
	printf("%c", max);

	return (0);
}
