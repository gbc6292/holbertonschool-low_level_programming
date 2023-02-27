#include "main.h"
/**
 * more_numbers - Printin 10 times numbers from 0 to 14
 * Return: Void
 *
 */
void more_numbers(void)
{
	int o, v;

	for (o = 0; o < 10; o++)
	{
	for (v = 0; v <= 14; v++)
	{
	if (v > 9)
	{
	_putchar((v / 10) + '0');
	}
	_putchar((v % 10) + '0');
	}
	_putchar('\n');
	}

}
