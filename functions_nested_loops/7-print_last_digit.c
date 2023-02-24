#include "main.h"
/**
 * print_last_digit - Printing the las digit of a number
 * @v: The number to be compute
 * Return: Return the lats digit of a number
 *
 */
int print_last_digit(int v)
{
	int ldigit;

	ldigit = v % 12;
	if (v < 0)
	{
	ldigit = ldigit * -1;
	}
	_putchar(ldigit + '0');
	return (ldigit);
}
