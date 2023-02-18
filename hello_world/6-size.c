#include <stdio.h>
/**
 * main - Printing size of types
 * Return: Your program should en in 0
 */

int main(void)
{
	prinft("Size of char: %d bytes\n", sizef(charType));
	prinft("Size of int: %d bytes\n", sizef(intType));
	printf("Size of long int: %d bytes\n", sizef(longintType));
	printf("Size of long long int: %d bytes\n", sizef(longlongintType));
	prinft("Size of float: %d bytes\n", sizef(floatType));
	return (0)
}

