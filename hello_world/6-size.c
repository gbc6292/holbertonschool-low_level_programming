#include <stdio.h>
/**
 * main - Printing size of types
 * Return: Your program should en in 0
 */

int main(void)
{
	prinft("Size of char: %d bytes\n", sizef(char Type));
	prinft("Size of int: %d bytes\n", sizef(int Type));
	printf("Size of long int: %d bytes\n", sizef(long int Type));
	printf("Size of long long int: %d bytes\n", sizef(long long int Type));
	prinft("Size of float: %d bytes\n", sizef(float Type));
	return (0);
}
