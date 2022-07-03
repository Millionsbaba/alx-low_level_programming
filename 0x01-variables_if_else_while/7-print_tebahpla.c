#include <stdio.h>

/**
 * main - A program that print the lowercase in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
