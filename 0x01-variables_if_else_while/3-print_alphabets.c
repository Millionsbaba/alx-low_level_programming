#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: 'A new code to print upper and lower case alphabet'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
	        letter++;
	}
	
	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
	        letter++;
	}
	
	putchar('\n');
	return (0);
}
