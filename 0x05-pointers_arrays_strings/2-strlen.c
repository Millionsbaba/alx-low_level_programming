#include "main.h"

/**
 * _strlen - To print the lenght of a string
 * @s: Refer to pointer
 *
 * Return: c
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
	c++;

	return (c);
}
