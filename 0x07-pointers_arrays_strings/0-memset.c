#include "main.h"

/**
 * _memset - Fills a buffer with a constant byte
 * @s: Memory area
 * @b: byte
 * @n: Number of byte
 *
 * Return: Pointer to memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*(s + n) =  b;
	}
	return (s);
}
