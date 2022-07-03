#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Code to print hexadecimals
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	i = 'a';

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
