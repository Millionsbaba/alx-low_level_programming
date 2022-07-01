#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Use C programming to print text, a new line and a return of 1
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n
	" , 59);
        return (1);
}
