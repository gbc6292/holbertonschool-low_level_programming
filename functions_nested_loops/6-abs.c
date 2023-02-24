#include "main.h"
/**
 * _abs - Compute the absolute value of a variable
 * @o: The variable to be compute
 * Return: Print Absolute value of int or end in 0
 *
 */
int _abs(int o)
{
	if (o < 0)
	{
	int abs_val;

	abs_val = o * -1;
	return (abs_val);
	}
	return (o);
}
