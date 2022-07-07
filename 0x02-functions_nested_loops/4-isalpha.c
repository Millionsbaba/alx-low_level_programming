#include "main.h"

/**
 * _isalpha - My code is to procuce lowercase and uppercase alphabets
 * @c:This tells us about c
 *
 * Return: 0 or 1 depending on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
