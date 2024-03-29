#include "main.h"
/**
 * print_binary - Function that print a binary number.
 * @n: Number to be printed in binary.
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
