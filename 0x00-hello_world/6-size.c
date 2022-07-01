#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Use a C program that prints the various size of a device
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of char: %zu byte\n", sizeof(char)); 
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of int: %zu bytes\n", sizeof(long int));
	printf("Size of int: %zu bytes\n", sizeof(long long int));
	printf("Size of float: %zu bytes\n", sizeof(float));
	return (0)
}
