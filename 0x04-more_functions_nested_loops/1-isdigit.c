#include "main.h"

/**
 * _isdigit - A code that checks for digits
 * @c: A parameter
 *
 * Return: 0 or 1 based on conditional statement
 */
int _isdigit(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
