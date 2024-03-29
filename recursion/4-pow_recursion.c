#include "main.h"

/**
 * _pow_recursion - function that raised the power of a number
 * @x: variable to be powered
 * @y: power to be elevated
 * Return: value raised to the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (x == 0)
	{
		return (0);
	}
	return (x * _pow_recursion(x, y - 1));
}
