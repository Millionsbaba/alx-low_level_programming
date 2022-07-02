#include <stdio.h>

/**
 * main - main point
 *
 * Description: 'A code to print all alphabets and skip two'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if(n != 'q' && n != 'e')
		{
			putchar(n);
		}
		n++;
	}
	
	putchar('\n');
	return 0;
}
